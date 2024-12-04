/*
sudo pacman -S glfw
git clone https://github.com/cococry/leif.git && cd leif/ && ./install.sh
paru -S libclipboard-git

gcc todo-yt.c -o todo-yt -lglfw -lGL -lleif -lclipboard -lm && ./todo-yt

/home/noobcoder_rtx/Documents/GitHub/LearningClang/PersonalPractice/GUI-gtk3
clang todo-yt.c -o todo-yt -lglfw -lGL -lleif -lclipboard -lm && ./todo-yt
*/

#include "config.h"
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cglm/types-struct.h>
#include <leif/leif.h>
#include <stdbool.h>
#include <stdint.h>

typedef enum {
  ALL = 0,
  IN_PROGRESS,
  COMPLETED,
  LOW,
  MEDIUM,
  HIGH
} entry_filter;

typedef enum {
  PRIORITY_LOW = 0,
  PRIORITY_MEDIUM,
  PRIORITY_HIGH
} entry_priority;

typedef struct {
  bool completed;
  char *desc, *date;
  entry_priority priority;
} task_entry;

#define WIN_MARGIN 20.0f
static int win_w = 1280, win_h = 720;
static LfFont _title_font;
static entry_filter current_filter;
static task_entry *current_entry[1024];
static uint32_t num_entry = 0;

// ===========================================================================
// ------------------------------- FUNCTIONS ---------------------------------
// ===========================================================================

/*
static void _render_top_bar() {
  // Title
  lf_push_font(&_title_font), lf_text("Your To Do list"), lf_pop_font();

  // Button
  {
    const char *text = "New Task";
    const float width = 150.0f;

    // UI Properties
    LfUIElementProps props = lf_get_theme().button_props;

    props.border_width = 0.0f;
    props.margin_top = 0.0f;
    // props.color = SECONDARY_COLOR;
    props.corner_radius = 4.0f;
    lf_push_style_props(props);
    // lf_set_ptr_x_absolute(s.winw - width - GLOBAL_MARGIN * 2.0f);
    lf_set_ptr_x_absolute(win_w - width - WIN_MARGIN * 2.0f);

    // Button
    lf_set_line_should_overflow(false);
    if (lf_button_fixed("New Task", width, -1) == LF_CLICKED) {
      // s.crnt_tab = TAB_NEW_TASK;
    }
    lf_set_line_should_overflow(true);

    lf_pop_style_props();
  }
}*/

static void _render_top_bar() {
  lf_push_font(&_title_font), lf_text("Your To Do list"), lf_pop_font();

  // button
  const float width = 160.0f;

  LfUIElementProps props = lf_get_theme().button_props;
  lf_set_ptr_x_absolute(win_w - width - WIN_MARGIN * 2.0f);
  props.margin_left = 0.0f, props.margin_right = 0.0f, props.margin_top = 0.0f;
  props.color = (LfColor){65, 167, 204, 255};
  props.border_width = 0.0f, props.corner_radius = 8.0f;
  lf_push_style_props(props);
  lf_set_line_should_overflow(false);
  lf_button_fixed("New Task", width, -1); // how minus 1 ?
  lf_set_line_should_overflow(true);      // to avoid overriding
  lf_pop_style_props();
}
// ------------------------------------------------------------------

static void _render_filters() { // KAZI
  static const uint32_t num_filters = 6;
  static const char *filters[] = {"All", "in-Progress", "Completed",
                                  "Low", "Medium",      "High"};

  LfUIElementProps props = lf_get_theme().text_props;
  props.margin_top = 20.0f;
  props.margin_right = 30.0f;
  props.padding = 10.0f;
  props.corner_radius = 4.0f;
  props.text_color = LF_WHITE;

  float width = 0.0f;
  float ptrx_before = lf_get_ptr_x(), ptry_before = lf_get_ptr_y();
  lf_push_style_props(props);
  lf_set_no_render(true);
  lf_set_ptr_y_absolute(lf_get_ptr_y() + 50.0f);
  for (uint32_t i = 0; i < num_filters; i++) {
    lf_button(filters[i]);
  }
  lf_set_no_render(false);
  lf_set_ptr_y_absolute(ptry_before);

  width = lf_get_ptr_x() - ptrx_before - props.margin_right - props.padding;
  lf_set_ptr_x_absolute(win_w - width - WIN_MARGIN * 2);

  lf_set_line_should_overflow(false);
  for (uint32_t i = 0; i < num_filters; i++) {
    props.color =
        (current_filter == i) ? (LfColor){120, 120, 120, 10} : LF_NO_COLOR;
    lf_push_style_props(props);
    if (lf_button(filters[i]) == LF_CLICKED) {
      lf_button(filters[i]);
      current_filter = (entry_filter)i;
    }
    lf_pop_style_props();
  }
  lf_set_line_should_overflow(true);
}
/*
void _render_filters() { // him
  // Filters
  uint32_t itemcount = 6;
  static const char *items[] = {"ALL", "IN PROGRESS", "COMPLETED",
                                "LOW", "MEDIUM",      "HIGH"};

  // UI Properties
  LfUIElementProps props = lf_get_theme().button_props;
  props.margin_left = 10.0f;
  props.margin_right = 10.0f;
  props.margin_top = 20.0f;
  props.padding = 10.0f;
  props.border_width = 0.0f;
  props.color = LF_NO_COLOR;
  props.corner_radius = 8.0f;
  props.text_color = LF_WHITE;

  // lf_push_font(&s.smallfont);

  // Calculating width
  float width = 0.0f;
  {
    float ptrx_before = lf_get_ptr_x();
    lf_push_style_props(props);
    lf_set_cull_end_x(win_w);
    lf_set_cull_end_y(win_h);
    lf_set_no_render(true);
    for (uint32_t i = 0; i < itemcount; i++) {
      lf_button(items[i]);
    }
    lf_unset_cull_end_x();
    lf_unset_cull_end_y();
    lf_set_no_render(false);
    width = lf_get_ptr_x() - ptrx_before - props.margin_right - props.padding;
  }

  lf_set_ptr_x_absolute(win_w - width - GLOBAL_MARGIN);

  // Rendering the filter items
  lf_set_line_should_overflow(false);
  for (uint32_t i = 0; i < itemcount; i++) {
    // If the filter is currently selected, render a
    // box around it to indicate selection.
    if (current_filter == (uint32_t)i) {
      props.color = (LfColor){255, 255, 255, 50};
    } else {
      props.color = LF_NO_COLOR;
    }
    // Rendering the button
    lf_push_style_props(props);
    if (lf_button(items[i]) == LF_CLICKED) {
      current_filter = i;
    }
    lf_pop_style_props();
  }
  // Popping props
  lf_set_line_should_overflow(true);
  lf_pop_style_props();
  lf_pop_font();
}
*/
// ===========================================================================
// ----------------------------- MAIN METHOD ---------------------------------
// ===========================================================================

int main(void) {
  glfwInit();

  GLFWwindow *_window = glfwCreateWindow(win_w, win_h, "ToDo-GLFW", NULL, NULL);

  glfwMakeContextCurrent(_window);
  lf_init_glfw(win_w, win_h, _window);

  LfTheme _theme = lf_get_theme();
  _theme.div_props.color = LF_NO_COLOR, lf_set_theme(_theme);
  _title_font = lf_load_font("./font/CalibriLight.ttf", 40);

  while (!glfwWindowShouldClose(_window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.05f, 0.05f, 0.05f, 1.0f);

    lf_begin();
    lf_div_begin(
        ((vec2s){WIN_MARGIN, WIN_MARGIN}),
        ((vec2s){win_w - WIN_MARGIN * 2.0f, win_h - WIN_MARGIN * 2.0f}),
        (true));
    // HERE
    _render_top_bar();
    lf_next_line();
    _render_filters();
    lf_next_line();

    lf_div_end();
    lf_end();

    glfwPollEvents();
    glfwSwapBuffers(_window);
  }

  lf_free_font(&_title_font);
  glfwDestroyWindow(_window);
  glfwTerminate();

  // END
}
