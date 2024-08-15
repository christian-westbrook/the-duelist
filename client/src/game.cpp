// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------

#include "SDL2/SDL.h"

int main(int argc, char* args[])
{
    // Start SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow("The Duelist", 500, 500, 500, 500, 0);
    
    // Quit SDL
    SDL_Quit();
    
    return 0;    
}
