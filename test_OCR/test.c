# include<gtk/gtk.h>

/*
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>

#include "pixel_operations.h"
# include "main.h"

*/

void destroy(GtkWidget *widget, gpointer *data)
{
    gtk_main_quit();
}
int main(int argc, char *argv[])
{
	GtkWidget *window1;
	GtkBuilder *builder;

    gtk_init(&argc,&argv);
	builder = gtk_builder_new();
	gtk_builder_add_from_file(builder,"Interface.glade",NULL);

	window1 = GTK_WIDGET(gtk_builder_get_object(builder,"window1"));
	gtk_builder_connect_signals(builder,NULL);

	g_object_unref(G_OBJECT(builder));

	gtk_widget_show(window1);
    gtk_main();
    return 0;

}	

