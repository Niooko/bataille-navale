#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>

#define NB_CASES 9
int main() {



/**** FENETRE *****/

    GtkWindow *fenetre=NULL;
   
   
    gtk_init(NULL, NULL); //initialise l'environnement gtk
   
   

    /* alloue la mémoire pour creer puis initialiser 1 Gtkwindow */

    fenetre=(GtkWindow*)gtk_window_new(GTK_WINDOW_TOPLEVEL);

    gtk_window_set_default_size(GTK_WINDOW(fenetre), 500, 500);
   
    gtk_window_set_resizable (GTK_WINDOW(fenetre), FALSE); // permet d'empêcher la fenêtre de bouger

    gtk_window_set_title(fenetre, "Bataille");




   
   

/***** Boite principale contenant le jeu *****/

    GtkHBox * boitePrincipale=NULL;

    boitePrincipale =(GtkHBox*) gtk_hbox_new(TRUE, 0);

    gtk_container_add(GTK_CONTAINER(fenetre), GTK_WIDGET(boitePrincipale));


/* Table contenant le jeu où l'on met ses navires */

    GtkWidget * table;

    table = (GtkWidget*)gtk_table_new(9,9,TRUE);

    gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(table));
   
   

       
/* Création des boutons */

    GtkButton *tab[NB_CASES][NB_CASES];
    GtkStyle *style;

    GtkWidget *image = NULL;

    int i,j;

    //gtk_table_attach_defaults(GTK_TABLE(table), GTK_WIDGET(tab), 0, 2, 0, 2 );
   

    for (j=0; j<NB_CASES; j++) {

        for (i=0; i<NB_CASES; i++){
   
            tab[i][j]= (GtkButton*)gtk_button_new();

            gtk_button_set_relief (GTK_BUTTON (tab[i][j]), GTK_RELIEF_NONE);

           

            gtk_table_attach_defaults(GTK_TABLE(table), GTK_WIDGET(tab[i][j]), i, i+1, j, j+1 );


           
        }
    }
   
    /*style = gtk_widget_get_style(GTK_BUTTON(tab[1][1]));
   
    style->bg[GTK_STATE_PRELIGHT] = style->bg[GTK_STATE_NORMAL];
    gtk_widget_set_style(GTK_BUTTON(tab[1][1]), style); */


    for(j=1; j<NB_CASES; j++){
        for(i=1; i<NB_CASES; i++){
               


                image = gtk_image_new_from_file("ocean.bmp");

                gtk_button_set_image(GTK_BUTTON(tab[i][j]), image);

        }
    }
        //image = gtk_image_new_from_file("ocean.bmp");
   

        //gtk_table_attach(GTK_TABLE(table), GTK_WIDGET(image), 0, 8, 0, 8, GTK_EXPAND | GTK_FILL, GTK_EXPAND | GTK_FILL, 0, 0);




/* Colonnes et lignes en chiffres et lettres */

    gtk_button_set_label(GTK_BUTTON(tab[0][1]), "1");
    gtk_button_set_label(GTK_BUTTON(tab[0][2]), "2");
    gtk_button_set_label(GTK_BUTTON(tab[0][3]), "3");
    gtk_button_set_label(GTK_BUTTON(tab[0][4]), "4");
    gtk_button_set_label(GTK_BUTTON(tab[0][5]), "5");
    gtk_button_set_label(GTK_BUTTON(tab[0][6]), "6");
    gtk_button_set_label(GTK_BUTTON(tab[0][7]), "7");
    gtk_button_set_label(GTK_BUTTON(tab[0][8]), "8");

    gtk_button_set_label(GTK_BUTTON(tab[1][0]), "A");
    gtk_button_set_label(GTK_BUTTON(tab[2][0]), "B");
    gtk_button_set_label(GTK_BUTTON(tab[3][0]), "C");
    gtk_button_set_label(GTK_BUTTON(tab[4][0]), "D");
    gtk_button_set_label(GTK_BUTTON(tab[5][0]), "E");
    gtk_button_set_label(GTK_BUTTON(tab[6][0]), "F");
    gtk_button_set_label(GTK_BUTTON(tab[7][0]), "G");
    gtk_button_set_label(GTK_BUTTON(tab[8][0]), "H");

/* Box du milieu permettant de choisir les navires */


    GtkVBox * boiteTrois = NULL;
    boiteTrois = (GtkVBox*)gtk_vbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(boiteTrois));


    GtkHBox *ssb3_1 = NULL;
    GtkHBox *ssb3_2 = NULL;
    ssb3_2 = (GtkHBox*)gtk_hbox_new(FALSE, 0);

    ssb3_1 = (GtkHBox*)gtk_hbox_new(FALSE, 0);

    gtk_container_add(GTK_CONTAINER(boiteTrois), GTK_WIDGET(ssb3_1));
    gtk_container_add(GTK_CONTAINER(boiteTrois), GTK_WIDGET(ssb3_2));

    GtkButton *test1;

    test1 = (GtkButton*)gtk_button_new();

    //gtk_button_set_relief (GTK_BUTTON (tab[i][j]), GTK_RELIEF_NONE);


    GtkWidget *imNav1;
    imNav1 = gtk_image_new_from_file("navire1.bmp");
    gtk_button_set_image(GTK_BUTTON(test1), imNav1);

    gtk_container_add(GTK_CONTAINER(ssb3_1), GTK_WIDGET(test1));


    /*GtkVBox *3_1_1 = NULL;
    gtk_container_add(GTK_CONTAINER(ssb3_1), GTK_WIDGET(3_1_1)); */
















/*Deuxième boite: suivi de l'autre joueur */


    /*GtkVBox * boiteSecondaire = NULL;

    boiteSecondaire = (GtkVBox*)gtk_vbox_new(TRUE, 0);
    gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(boiteSecondaire)); */

   
    GtkWidget * table2;

    table2 = (GtkWidget*)gtk_table_new(9,9,TRUE);

    gtk_container_add(GTK_CONTAINER(boitePrincipale), GTK_WIDGET(table2));
   
   

       
/* Création des boutons */

    GtkButton *tab2[NB_CASES][NB_CASES];
    //GtkStyle *style;

    GtkWidget *image2 = NULL;

    //int i,j;

    //gtk_table_attach_defaults(GTK_TABLE(table), GTK_WIDGET(tab), 0, 2, 0, 2 );
   

    for (j=0; j<NB_CASES; j++) {

        for (i=0; i<NB_CASES; i++){
   
            tab2[i][j]= (GtkButton*)gtk_button_new();

            gtk_button_set_relief (GTK_BUTTON (tab2[i][j]), GTK_RELIEF_NONE);

           

            gtk_table_attach_defaults(GTK_TABLE(table2), GTK_WIDGET(tab2[i][j]), i, i+1, j, j+1 );


           
        }
    }
   
    /*style = gtk_widget_get_style(GTK_BUTTON(tab[1][1]));
   
    style->bg[GTK_STATE_PRELIGHT] = style->bg[GTK_STATE_NORMAL];
    gtk_widget_set_style(GTK_BUTTON(tab[1][1]), style); */


    for(j=1; j<NB_CASES; j++){
        for(i=1; i<NB_CASES; i++){
               


                image = gtk_image_new_from_file("ocean.bmp");

                gtk_button_set_image(GTK_BUTTON(tab2[i][j]), image);

        }
    }
        //image = gtk_image_new_from_file("ocean.bmp");
   

        //gtk_table_attach(GTK_TABLE(table), GTK_WIDGET(image), 0, 8, 0, 8, GTK_EXPAND | GTK_FILL, GTK_EXPAND | GTK_FILL, 0, 0);




/* Colonnes et lignes en chiffres et lettres */

    gtk_button_set_label(GTK_BUTTON(tab2[0][1]), "1");
    gtk_button_set_label(GTK_BUTTON(tab2[0][2]), "2");
    gtk_button_set_label(GTK_BUTTON(tab2[0][3]), "3");
    gtk_button_set_label(GTK_BUTTON(tab2[0][4]), "4");
    gtk_button_set_label(GTK_BUTTON(tab2[0][5]), "5");
    gtk_button_set_label(GTK_BUTTON(tab2[0][6]), "6");
    gtk_button_set_label(GTK_BUTTON(tab2[0][7]), "7");
    gtk_button_set_label(GTK_BUTTON(tab2[0][8]), "8");

    gtk_button_set_label(GTK_BUTTON(tab2[1][0]), "A");
    gtk_button_set_label(GTK_BUTTON(tab2[2][0]), "B");
    gtk_button_set_label(GTK_BUTTON(tab2[3][0]), "C");
    gtk_button_set_label(GTK_BUTTON(tab2[4][0]), "D");
    gtk_button_set_label(GTK_BUTTON(tab2[5][0]), "E");
    gtk_button_set_label(GTK_BUTTON(tab2[6][0]), "F");
    gtk_button_set_label(GTK_BUTTON(tab2[7][0]), "G");
    gtk_button_set_label(GTK_BUTTON(tab2[8][0]), "H");














   


    //gtk_signal_connect(GTK_WIDGET())


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

}

-- 
Endrass Lillan
Étudiante à Sup' Galilée - École d'ingénieurs.
2ème année de classe préparatoire intégrée.
Université Paris 13 - Villetaneuse
Tel: 06.02.35.46.41
    
