#include "main.h"
#include <process.h>


uint8_t init_sdl(const char* title,uint32_t width,uint32_t height)
{
        sdl_window = NULL;
        sdl_renderer = NULL;

        if (SDL_Init(SDL_INIT_VIDEO) < 0)
                return 1;

        sdl_window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
        
        if (sdl_window == NULL)
                return 1;

        sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
        return 0;
}
