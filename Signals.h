#ifndef __H_SIGNALS_H__
#define __H_SIGNALS_H__

#include <gtk/gtk.h>

namespace gui{
	class Signal{
		public:
			static void WindowDestroy(GtkWidget *w, gpointer ptr){
 				 gtk_main_quit();
			}
			static gint delete_event(GtkWidget *w, GdkEvent *e, gpointer ptr){
				g_print("Delete event raised");

				return FALSE;
			}
	};
};

#endif
