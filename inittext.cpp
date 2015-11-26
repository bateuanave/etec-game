#include "globals.h"

int menu_text(){
    ALLEGRO_FONT *welcome = al_load_ttf_font("AllerDisplay.ttf",26,0 );
   if (!welcome){
      fprintf(stderr, "\nCould not load font.\n");
      return -1;
   }
   al_draw_text(welcome, al_map_rgb(255,0,0), 600/2, 400/6,ALLEGRO_ALIGN_CENTRE, "Welcome");
   al_draw_text(welcome, al_map_rgb(255,0,0), 600/2, 400/5.5,ALLEGRO_ALIGN_CENTRE, "_______");
   al_flip_display();
}
