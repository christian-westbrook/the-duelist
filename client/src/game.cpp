// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------


// Define game constants
#define GAME_TITLE "The Duelist"

// Define window constants
#define WINDOW_POS_X 700
#define WINDOW_POS_Y 200
#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500
#define SDL_WINDOW_FLAGS 0

#include "SDL2/SDL.h"

int main(int argc, char* args[])
{
    // Start SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow(
        GAME_TITLE, 
        WINDOW_POS_X, WINDOW_POS_Y, 
        WINDOW_WIDTH, WINDOW_HEIGHT, 
        SDL_WINDOW_FLAGS
    );

    SDL_Delay(3000);
    
    // Quit SDL
    SDL_Quit();
    
    return 0;    
}
