# include<gtk/gtk.h>

/*
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>

#include "pixel_operations.h"
# include "main.h"

*/

void hello(GtkWidget *widget, gpointer *data)
{
    g_print("Hello World\n");
}
void destroy(GtkWidget *widget, gpointer *data)
{
    gtk_main_quit();
}

int main(int argc, char *argv[])
{ 
    GtkWidget *pWindow;
    GtkWidget *pVBox;
    GtkWidget *pHBox;
    GtkWidget *pButton[4];
 
    gtk_init(&argc,&argv);
 
    pWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(pWindow), "Les GtkBox");
    gtk_window_set_default_size(GTK_WINDOW(pWindow), 320, 200);
    g_signal_connect(G_OBJECT(pWindow), "destroy", 
                     G_CALLBACK(gtk_main_quit), NULL);
 
    /* Création de la GtkBox verticale */
    pHBox = gtk_hbox_new(TRUE, 0);
    pVBox = gtk_vbox_new(FALSE,0);
    /* Ajout de la GtkHBox dans la fenetre */
    gtk_container_add(GTK_CONTAINER(pWindow), pHBox);
 
    /* Creation des boutons */
    pButton[0] = gtk_button_new_with_label("Bouton 0");
    pButton[1] = gtk_button_new_with_label("Bouton 1");
    pButton[2] = gtk_button_new_with_label("Bouton 2");
    pButton[3] = gtk_button_new_with_label("Bouton 3");
 
    /* Ajout de Bouton 1 dans la GtkVBox */
    gtk_box_pack_start(GTK_BOX(pVBox), pButton[0], FALSE, FALSE, 0);
 
    /* Ajout de la GtkHBox dans la GtkVBox */
    gtk_box_pack_start(GTK_BOX(pHBox), pVBox, TRUE, TRUE, 0);
 
    /* Ajout des boutons 2 et 3 dans la GtkHBox */
    gtk_box_pack_start(GTK_BOX(pVBox), pButton[1], FALSE, FALSE, 0);

    gtk_box_pack_start(GTK_BOX(pHBox), pButton[2], FALSE, FALSE, 100);
 
    /* Ajout du dernier bouton dans la GtkVBox */
    gtk_box_pack_start(GTK_BOX(pHBox), pButton[3], FALSE, FALSE, 500);
 
    gtk_widget_show_all(pWindow);
    gtk_main();
    return 0;
}
