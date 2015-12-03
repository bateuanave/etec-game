#include "globals.h"
int load_sound(){
    ALLEGRO_SAMPLE *sample=NULL;
   sample = al_load_sample( "!1hardcore.wav" );
   if (!sample){
      printf( "Audio clip sample not loaded!\n" ); 
      return -1;
   }
   /* Loop the sample until the display closes. */
   al_play_sample(sample, 1.0, 0.0,1.0,ALLEGRO_PLAYMODE_LOOP,NULL);
   al_rest(30);
   al_destroy_sample(sample);
   return 0;
}
