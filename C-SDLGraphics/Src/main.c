#include "main.h"
#include <windows.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main()
{
       init_sdl("Testing program", SCREEN_WIDTH, SCREEN_HEIGHT);

       SDL_Event e;
       while (1)
       {
               ////
               ////

               SDL_Rect fillRect = { rand()%SCREEN_WIDTH, rand() % SCREEN_HEIGHT , 1, 1 };
               SDL_SetRenderDrawColor(sdl_renderer, rand() % 255, rand() % 255, rand() % 255, rand() % 255);
               SDL_RenderFillRect(sdl_renderer, &fillRect);

               if (SDL_PollEvent(&e) != 0) {
                       if (e.type == SDL_QUIT)
                       {
                               break;
                       }
               }

               SDL_RenderPresent(sdl_renderer);
       }

       SDL_DestroyWindow(sdl_window);
       SDL_Quit();
       return 0;
}