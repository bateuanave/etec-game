#include "globals.h"
using namespace std;
ALLEGRO_DISPLAY *window = NULL;
const int wGame = 600;
const int hGame = 400;
int game_init() {
	al_init();
	installs();
	cout << "\nGame: ready!";
	window = al_create_display(wGame, hGame);
	al_clear_to_color(al_map_rgb(250, 250, 250));
	al_flip_display();
	load_bg();
	menu_text();
	al_rest(2);
	load_sound();
	al_destroy_display(window);
	return 0;
}
