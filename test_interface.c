#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>

#define NB_CASES 8

int main() {





	GtkWindow *fenetre=NULL; 
	
	
	gtk_init(NULL, NULL); //initialise l'environnement gtk
	
	

	/* alloue la mémoire pour creer puis initialiser 1 Gtkwindow */ 

	fenetre=(GtkWindow*)gtk_window_new(GTK_WINDOW_TOPLEVEL);

	gtk_window_set_default_size(GTK_WINDOW(fenetre), 500, 500);

	gtk_window_set_title(fenetre, "Bataille");





/* Boutons */

	
	

/* Box */ 

	GtkHBox * boitePrincipale=NULL;

	boitePrincipale =(GtkHBox*) gtk_hbox_new(TRUE, 0);

	gtk_container_add(GTK_CONTAINER(fenetre), GTK_WIDGET(boitePrincipale));


	GtkWidget * table;

	table = (GtkWidget*)gtk_table_new(8,8,TRUE);

	gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(table));
	
	GtkVBox * boiteSecondaire = NULL;
	//GtkVBox * boiteTrois = NULL;

	//int i;

	/*	for (i=0; i<8; i++){ */


	boiteSecondaire = (GtkVBox*)gtk_vbox_new(TRUE, 0);

	gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(boiteSecondaire));

	//boiteTrois = (GtkVBox*)gtk_vbox_new(TRUE,0);
	
	//gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(boiteTrois));

		



	GtkButton *tab[NB_CASES][NB_CASES];
	
	int i,j;

	//gtk_table_attach_defaults(GTK_TABLE(table), GTK_WIDGET(tab), 0, 2, 0, 2 );
	for (j=0; j<NB_CASES; j++) {
		for (i=0; i<NB_CASES; i++){
	
			tab[i][j]= (GtkButton*)gtk_button_new();
		

		} 
	}

	GtkWidget *image = NULL;

		image = gtk_image_new_from_file("ocean.bmp");
	

		gtk_table_attach(GTK_TABLE(table), GTK_WIDGET(image), 0, 8, 0, 8, GTK_EXPAND | GTK_FILL, GTK_EXPAND | GTK_FILL, 0, 0);


	for (j=0; j<NB_CASES; j++) {


		for (i=0; i<NB_CASES; i++){

			gtk_table_attach_defaults(GTK_TABLE(table), GTK_WIDGET(tab[i][j]), i, i+1, j, j+1 );

		


		}
	}

	gtk_signal_connect(GTK_WIDGET())


	gtk_widget_show_all(GTK_WIDGET(fenetre));
	



	/* Initialise structures */



	/* Fontion du jeu */

	/*for (i=0; i<8; i++){
		
		//gtk_signal_connect(GTK_OBJECT(tab[i]), "clicked", G_CALLBACK(test), tot[i]);

		gtk_signal_connect(GTK_OBJECT(tab[i]), "clicked", G_CALLBACK(ouvert), &tot[i]);
		

		if (p->i == 50) {
			gtk_window_set_title(fenetre, "Vous avez gagné !!");
		} 

	}*/ 



	gtk_signal_connect(GTK_OBJECT(fenetre), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	gtk_main();

	return EXIT_SUCCESS;
