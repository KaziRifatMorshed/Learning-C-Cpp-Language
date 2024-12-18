#include <curses.h>
#include <ncurses.h>
#include <ncurses_dll.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // usleep()

#define MAX_LENGTH 50
#define FRAME_TIME 110000

typedef struct {
  int x, y;
} vec2d;

int score = 0;
vec2d segments[MAX_LENGTH];

bool Collide_Snake(vec2d a) {
  for (int i = 0; i < score; i++) {
    if (a.x == segments[i].x && a.y == segments[i].y) {
      return true;
    }
  }
  return false;
}

void draw_border(int width, int height, char c) { // BUJHI NAI !!!
  for (int i = 0; i < width; i++) {
    mvaddch(0, i * 2, c); // i * 2 ??????
  }
  for (int i = 1; i < height; i++) {
    mvaddch(i, 0, c);
    mvaddch(i, (width - 1) * 2, c);
  }
  for (int i = 0; i < height; i++) {
    mvaddch(height - 1, i * 2, c);
  }
}

// MAIN FUNCTION
int main(int argc, char *argv[]) {
  // CLI arguments
  bool looping;
  if (argc == 1) {
    looping = false;
  } else if (argc == 2) {
    if (strcmp(argv[1], "-h") || strcmp(argv[2], "--help")) {
      printf("usage: snake <argument>\n\t-l\t\tlooping\n[DEFAULT]\t\tno "
             "looping\nProgram Terminated...\n");
      exit(0);
    }
  }

  int screen_width, screen_height;

  // initialize screen
  WINDOW *win = initscr();

  getmaxyx(win, screen_height, screen_width);

  if (screen_width % 2 == 0) {
    screen_width = (screen_width / 2) - 2;
  } else {
    screen_width = (screen_width / 2) - 1;
  }
  screen_height -= 2; // why ????

  // setting up colors
  if (has_colors() == FALSE) {
    endwin();
    fprintf(stderr, "Your terminal does not support color, Program Terminated");
    // printf("Your terminal does not support color, Program Terminated");
    exit(1);
  }
  // feeling new
  start_color();
  use_default_colors();
  init_pair(1, COLOR_RED, -1);
  init_pair(2, COLOR_GREEN, -1);

  // take player input
  keypad(win, true);
  nodelay(win, true); // not going to wait for input, will keep going
  curs_set(0);        // hide the curser

  // snake
  vec2d head = {0, 0};
  vec2d dir = {1, 0};
  char head_char = '>';

  bool spawn_berry = false;
  vec2d berries[32];
  int num_berries = 1;
  // berry
  vec2d berry = {1 + rand() % (screen_width - 1),   // bujhi nai
                 1 + rand() % (screen_height - 2)}; // bujhi nai
  berries[0] = berry;

  char score_message[40];
  sprintf(score_message, "\tScore = %d\t", score);

  while (true) {
    int pressed = wgetch(win); // get character pressed from the player
    if (pressed == KEY_LEFT) {
      if (dir.x == 1) {
        continue;
      }
      dir.x = -1;
      dir.y = 0;
      head_char = '<';
    }
    if (pressed == KEY_RIGHT) {
      if (dir.x == -1) {
        continue;
      }
      dir.x = 1;
      dir.y = 0;
      head_char = '>';
    }
    if (pressed == KEY_UP) {
      if (dir.y == 1) {
        continue;
      }
      dir.x = 0;
      dir.y = -1; // why minus one
      head_char = '^';
    }
    if (pressed == KEY_DOWN) {
      if (dir.y == -1) {
        continue;
      }
      dir.x = 0;
      dir.y = 1; // not minus one
      head_char = 'v';
    }
    if (pressed == '\e') {
      break;
    }

    // ----update------
    // bar bar snake er full body er location change hosse
    for (int i = score; i > 0; i--) { // bujhi nai
      segments[i] = segments[i - 1];  // bujhi nai
    }

    segments[0] = head;

    head.x += dir.x;
    head.y += dir.y;

    // loop through the play area
    // open boundary
    if (looping) {
      if (head.x < 0) {
        head.x = screen_width;
      }
      if (head.x > screen_width) {
        head.x = 0;
      }
      if (head.y > screen_height) {
        head.y = 0;
      }
      if (head.y < 0) {
        head.y = screen_height;
      }
    }

    // keep berry on screen while resizing
    for (int i = 0; i < num_berries; i++) {
      if (berries[i].x > screen_width) {
        berries[i].x = screen_width;
      }
      if (berries[i].y > screen_height) {
        berries[i].y = screen_height;
      }
    }

    // scoring
    if (head.x == berry.x && head.y == berry.y) {
      score++;
      berry.x = rand() % screen_width;
      berry.y = rand() % screen_height;
    }

    // ---- draw -----
    erase();

    // Draw Berry
    // mvaddch(berry.y, berry.x * 2, '@');
    for (int i = 0; i < num_berries; i++) { // bujhi nai
      attron(COLOR_PAIR(1));                // bujhi nai
      mvaddch(berries[i].y + 1, berries[i].x + 1, '@');
      attroff(COLOR_PAIR(1)); // bujhi nai
    }

    /*
        // draw snake
        for (int i = 0; i < score; i++) {
          mvaddch(segments[i].y, segments[i].x * 2, 'o');
        }
        mvaddch(head.y, head.x * 2, 'O'); // probably not working
    */
    // draw snake
    attron(COLOR_PAIR(2));
    for (int i = 0; i < score; i++) {
      mvaddch(segments[i].y + 1, segments[i].x + 1, 'o');
    }
    mvaddch(head.y + 1, head.x + 1, head_char);
    attroff(COLOR_PAIR(2));

    // draw border
    draw_border(screen_width + 2, screen_height + 2, '#');

    usleep(FRAME_TIME);
  }
  endwin();

  // EOF
  return 0;
}
