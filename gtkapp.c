#include <gtk/gtk.h>

static void on_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Why??\n");
}

int main(int argc, char * argv[]){
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *button;
    GtkWidget *closeButton;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTKButton");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

}