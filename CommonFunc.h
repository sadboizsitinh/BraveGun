#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <windows.h>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

static SDL_Window* g_window = NULL; 
static SDL_Renderer* g_screen = NULL; 
static SDL_Event g_event; 

// Screen 
const int SCREEN_WIDTH = 800; 
const int SCREEN_HEIGHT = 400; 
const int SCREEN_BPP = 32; 

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

const int RENDER_DRAW_COLOR = 255;

#define TILE_SIZE 64

#define MAX_MAP_X 400
#define MAX_MAP_Y 10

#endif



