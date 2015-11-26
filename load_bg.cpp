#include "globals.h"
ALLEGRO_BITMAP *image = NULL;
ALLEGRO_BITMAP *init = NULL;
int himg = 0, wimg =0;
int load_bg() {
	image = al_load_bitmap("wip_parallax_background_by_stormandy-d5n5tr6.png");
	al_draw_bitmap(image, 0, 0, 0);
	init = al_load_bitmap("teste.jpg");
	al_draw_bitmap(init, 600/4, 400/4, 0);
	himg = al_get_bitmap_height(init);
	wimg = al_get_bitmap_width(init);
	cout << endl <<himg << endl << wimg;
	al_flip_display();
	return 0;
}
