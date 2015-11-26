#pragma once
#include <allegro5\allegro.h>
#include <allegro5\allegro_audio.h>
#include <allegro5\allegro_acodec.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <iostream>
using namespace std;
#ifndef _GLOBALS_H
#define _GLOBALS_H
int game_init();
int load_bg();
int load_sound();
int installs();
int menu_text();

#endif
