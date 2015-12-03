#include "globals.h"

int registros(){
bool doexit = false;
   ALLEGRO_EVENT_QUEUE *event_queue = NULL;
   event_queue = al_create_event_queue();
   ALLEGRO_USTR *input = al_ustr_new("");
   if(!event_queue) {
      fprintf(stderr, "failed to create event_queue!\n");
      }
   al_register_event_source(event_queue, al_get_keyboard_event_source());
   while(!doexit){
      ALLEGRO_EVENT ev;
      al_wait_for_event(event_queue, &ev);    
      if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
         break;
      }
      else if(ev.type == ALLEGRO_EVENT_KEY_DOWN) {
           if(ev.keyboard.keycode == ALLEGRO_KEY_1){
           makemarc();
           }
           else if(ev.keyboard.keycode == ALLEGRO_KEY_2){
           cout <<"\nAtirador";
           }
           
      }    
   }
   al_destroy_event_queue(event_queue);
   
}
