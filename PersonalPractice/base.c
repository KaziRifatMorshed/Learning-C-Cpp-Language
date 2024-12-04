/*#include <gtk/gtk.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  gtk_init(&argc, &argv);
  GtkWidget *dialog =
      gtk_message_dialog_new(NULL, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO,
                             GTK_BUTTONS_OK, "dialog world!");
  gtk_message_dialog_format_secondary_text(GTK_MESSAGE_DIALOG(dialog),
                                           "This is an example dialog.");
  gtk_dialog_run(GTK_DIALOG(dialog));
  return 0;
}
*/

#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
  GtkWidget *window;
  GtkWidget *label;

  gtk_init(&argc, &argv);

  /* Create the main, top level window */
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

  /* Give it the title */
  gtk_window_set_title(GTK_WINDOW(window), "Hello, world!");

  /*
  ** Map the destroy signal of the window to gtk_main_quit;
  ** When the window is about to be destroyed, we get a notification and
  ** stop the main GTK+ loop by returning 0
  */
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  /*
  ** Assign the variable "label" to a new GTK label,
  ** with the text "Hello, world!"
  */
  label = gtk_label_new(
      "Hello, world!  But I must explain to you how all this mistaken idea of "
      "\n"
      "denouncing pleasure and praising pain was born and I will give you a \n"
      "complete account of the system, and expound the actual teachings of "
      "the\n "
      "great explorer of the truth, the master-builder of human happiness. No "
      "\n"
      "one rejects, dislikes, or avoids pleasure itself, because it is \n"
      "pleasure, but because those who do not know how to pursue pleasure \n"
      "rationally encounter consequences that are extremely painful. Nor again "
      "\n"
      "is there anyone who loves or pursues or desires to obtain pain of \n"
      "itself, because it is pain, but because occasionally circumstances \n"
      "occur in which toil and pain can procure him some great pleasure. To \n"
      "take a trivial example, which of us ever undertakes laborious physical "
      "\n"
      "exercise, except to obtain some advantage from it? But who has any \n"
      "right to find fault with a man who chooses to enjoy a pleasure that has "
      "\n"
      "no annoying consequences, or one who avoids a pain that produces no \n"
      "resultant pleasure?");

  /* Plot the label onto the main window */
  gtk_container_add(GTK_CONTAINER(window), label);

  /* Make sure that everything, window and label, are visible */
  gtk_widget_show_all(window);

  /*
  ** Start the main loop, and do nothing (block) until
  ** the application is closed
  */
  gtk_main();

  return 0;
}