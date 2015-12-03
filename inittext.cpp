#include "globals.h"

int menu_text(){
    ALLEGRO_FONT *welcome = al_load_ttf_font("Monstur.ttf",26,0 );
   if (!welcome){
      fprintf(stderr, "\nCould not load font.\n");
      return -1;
   }
   al_draw_text(welcome, al_map_rgb(199,26,43), 600/2, 400/5,ALLEGRO_ALIGN_CENTRE, "Select your mode:");
   al_draw_text(welcome, al_map_rgb(199,26,43), 600/2, 400/4.5,ALLEGRO_ALIGN_CENTRE, "_________________");
   al_flip_display();
}
