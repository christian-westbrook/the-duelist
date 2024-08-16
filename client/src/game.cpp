// -----------------------------------------------------------------------------
// Application : The Duelist
// Copyright   : Copyright (c) 2024 Christian Westbrook
// License     : https://github.com/christian-westbrook/the-duelist/blob/main/LICENSE
//
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

    // -------------------------------------------------------------------------
    // GAME LOOP
    // -------------------------------------------------------------------------
    bool is_running = true;
    
    while(is_running) {
        // ---------------------------------------------------------------------
        // HANDLE EVENTS
        // ---------------------------------------------------------------------
        SDL_Event event;
        SDL_PollEvent(&event); // Store data from the latest event at the memory
                               // address of the 'event' variable

        switch(event.type) {
            case SDL_QUIT: // The user clicked on the exit button
                is_running = false;
                break;
            case SDL_KEYDOWN: // The user pressed a key
                if(event.key.keysym.sym == SDLK_ESCAPE) {
                    is_running = false;
                    break;
                }
            default:
                break;
        }
        
        // ---------------------------------------------------------------------
        // TICK
        // ---------------------------------------------------------------------

        // ---------------------------------------------------------------------
        // RENDER
        // ---------------------------------------------------------------------
    }
    
    // Quit SDL
    SDL_Quit();
    
    return 0;
}
