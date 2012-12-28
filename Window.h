#ifndef __H_WINDOW_H__
#define __H_WINDOW_H__
#include <gtk/gtk.h>
#include <gdk/gdk.h>

namespace gui{
	class Window{
		private:
			GtkWidget *window, *okButton, *cancelButton;
			void (destroyCallback)(GtkWidget*, gpointer); /*Generic destroy callback*/
			gint *(deleteCallback)(GtkWidget*, GdkEvent*, gpointer); /*Generic delete_event callback*/
			void SetupSignals();
		public:
			/*Default window constructor*/
			Window();
			/*Window constructor informing window name*/
			Window(char*);

			~Window();
			
			void ShowWindow();

			/*void SetDestroyCallBack(void (d)(GtkWidget*, gpointer)) { this->destroyCallback = d; }*/

			/*void SetDeleteCallBack(gint *(d)(GtkWidget*, GdkEvent*, gpointer)) { this->deleteCallback = d; }*/


	};
};

#endif
