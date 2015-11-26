#include "globals.h"
int installs(){  
//Install audios codecs
   if(!al_install_audio()){
      fprintf(stderr, "\nfailed to initialize audio!\n");
      return -1;
   }
   else{cout << "\naudio: ready";}
   if(!al_init_acodec_addon()){
      fprintf(stderr, "\nfailed to initialize audio codecs!\n");
      return -1;
   }else{cout << "\naudio codec: ready!";}
   if (!al_reserve_samples(1)){
      fprintf(stderr, "\nfailed to reserve samples!\n");
      return -1;
   }else{cout << "\nsample reserve: ready!";}
////////////////

// Install fonts
   al_init_font_addon();
   if(al_init_ttf_addon()){
      cout << "\nfont: ready!";   
   }
   
//////////////
/// IMAGE
al_init_image_addon();
//
}
