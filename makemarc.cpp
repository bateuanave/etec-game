#include "globals.h"
ALLEGRO_BITMAP *morc = NULL;
ALLEGRO_BITMAP *tree = NULL;
int makemarc(){
    int i, j, posx = 0, posy = 0;
    int mat_tree[10][10];
    cout << "\nMarciano selecionado";
    morc = al_load_bitmap("maxresdefault.jpg");
	al_draw_bitmap(morc, 0, 0, 40);
	tree = al_load_bitmap("tree.png");
	for(i = 0; i < 9; i++){
          Sleep(1);
         for(j = 0; j < 9; j++){
               Sleep(1);
               al_draw_bitmap(tree, posx, posy,0);
               posx = posx+30;
               
         }
         posy = posy+30; 
         posx = 0;
    }
	al_flip_display();   
}
