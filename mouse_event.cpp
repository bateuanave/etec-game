#include "globals.h"

int mouse() {
    bool done = false;
    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_mouse_event_source());
    while(!done){
           ALLEGRO_EVENT events;
           al_wait_for_event(event_queue, &events);   
           if(events.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN){
                x = events.mouse.x; 
                cout << x;         
           }   
    }
}
