// -----------------------------------------------------------------------------
// Application : The Duelist
// Engineer    : Christian Westbrook
// Abstract    : This source file contains the entry point for the The Duelist.
// -----------------------------------------------------------------------------

// Imports
#include "SDL2/SDL.h"

// Define game constants
#define GAME_TITLE "The Duelist"

// Define window constants
#define WINDOW_POS_X 700
#define WINDOW_POS_Y 200
#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500

#define SDL_WINDOW_FLAGS 0
#define SDL_RENDERER_FLAGS 0

int main(int argc, char* args[])
{
    // Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    // Create the SDL Window
    SDL_Window *window = SDL_CreateWindow(
        GAME_TITLE, 
        WINDOW_POS_X, WINDOW_POS_Y, 
        WINDOW_WIDTH, WINDOW_HEIGHT, 
        SDL_WINDOW_FLAGS
    );

    // Create the SDL Renderer
   SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_FLAGS);

    // Create the game loop
    bool is_running = true;

    while(is_running) {
        // Process input
        SDL_Event event;
        SDL_PollEvent(&event);

        switch(event.type) {
            case SDL_QUIT: {
                is_running = false;
                break;
            }
            case SDL_KEYDOWN: {
                if(event.key.keysym.sym == SDLK_ESCAPE) {
                    is_running = false;
                    break;
                }
            }
            default: {
                break;
            }
        }
        
        // Tick

        // Render
    }
    
    // Quit SDL
    SDL_Quit();
    
    return 0;
}
