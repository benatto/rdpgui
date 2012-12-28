#include "Window.h"
#include "Signals.h"

using namespace gui;


Window::Window(char *title){
	this->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	/*Setting window properties*/
	gtk_window_set_title(GTK_WINDOW(this->window), title);
	gtk_window_set_default_size(GTK_WINDOW(this->window), 230, 150);
	gtk_window_set_position(GTK_WINDOW(this->window), GTK_WIN_POS_CENTER);
	gtk_window_set_type_hint(GTK_WINDOW(this->window), GDK_WINDOW_TYPE_HINT_MENU);

	this->SetupSignals();

}

Window::Window(){
	this->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(this->window), 230, 150);
	gtk_window_set_position(GTK_WINDOW(this->window), GTK_WIN_POS_CENTER);
	gtk_window_set_decorated(GTK_WINDOW(this->window), FALSE);
	this->SetupSignals();
}

void Window::ShowWindow(){
	gtk_widget_show(this->window);

	gtk_main();
}

void Window::SetupSignals(){
	g_signal_connect(G_OBJECT(this->window), "destroy", G_CALLBACK(Signal::WindowDestroy), NULL);
	g_signal_connect(G_OBJECT(this->window), "delete_event", G_CALLBACK(Signal::delete_event), NULL);
}
