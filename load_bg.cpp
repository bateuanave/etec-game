#include "globals.h"
ALLEGRO_BITMAP *image = NULL;
ALLEGRO_BITMAP *marc = NULL;
ALLEGRO_BITMAP *shot = NULL;
int himg = 0, wimg =0;
int load_bg() {
	image = al_load_bitmap("montanha.png");
	al_draw_bitmap(image, 0, 0, 40);
	marc = al_load_bitmap("marc.png");
	shot = al_load_bitmap("shot.png");
	al_draw_bitmap(marc, 600/5, 400/3, 0);
	al_draw_bitmap(shot, 600/2, 400/3, 0);
	himg = al_get_bitmap_height(marc);
	wimg = al_get_bitmap_width(marc);
	cout << endl <<himg << endl << wimg;
	himg = al_get_bitmap_height(shot);
	wimg = al_get_bitmap_width(shot);
	cout << endl <<himg << endl << wimg;
	al_flip_display();
	
	
	return 0;
}
