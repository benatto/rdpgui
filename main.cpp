#include <iostream>
#include <gtk/gtk.h>

#include "Window.h"
#include "Signals.h"

using namespace std;
using namespace gui;

void ClickCallBack(GtkWidget *widget, GdkEventButton *event, gpointer callback_data){
	std::cerr << "button pressed: " << event->button << std::endl;
}

static void destroy_event(GtkWidget *widget, gpointer data){
	std::cerr << "quiting" << std::endl;
	gtk_main_quit();
}

static gboolean delete_event(GtkWidget *widget, GdkEvent *event, gpointer data){
	return FALSE;
}

/*int main(int argc, char *argv[]){
	gtk_init(&argc, &argv);

	GtkWidget *window, *button;

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	button = gtk_button_new_with_label("Push de button.");

	g_signal_connect(G_OBJECT(button), "button_press_event", G_CALLBACK(ClickCallBack), NULL);
	g_signal_connect(G_OBJECT(window), "delete_event", G_CALLBACK(delete_event), NULL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(destroy_event), NULL);
	
	gtk_container_add(GTK_CONTAINER(window), button);

	gtk_widget_show_all(window);

	gtk_main();

	return 0;
}*/

int main(int argc, char **argv){
	gtk_init(&argc, &argv);

	Window *w = new Window("Conexão RDP");

	w->ShowWindow();
}
