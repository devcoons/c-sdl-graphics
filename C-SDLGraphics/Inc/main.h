#include <stdio.h>
#include <inttypes.h>
#include "SDL.h"

SDL_Window* sdl_window;
SDL_Renderer* sdl_renderer;

uint8_t init_sdl(const char* title, uint32_t width, uint32_t height);