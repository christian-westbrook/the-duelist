"""
Application : The Duelist
Module      : client.py
Engineer    : Christian Westbrook
Abstract    : This module contains a single class called Client that represents
              the game client.
"""

# Imports
import pygame

class Game:
    """
    Class    : Game
    Engineer : Christian Westbrook
    Abstract : This class represents the game and is responsible for managing
               the game client's visual representation of the game.
    """
    def __init__(self, width, height):
        self.window_width = width
        self.window_height = height
        self.running = False

        pygame.init()

        self.screen = self.construct_window(width, height)
        self.start()


    def construct_window(self, width, height):
        """
        Method   : construct_window()
        Engineer : Christian Westbrook

        Inputs   : width - An integer representing the width of the game client
                           window in pixels
                   height - An integer representing the height of the game
                            client window in pixels
        Outputs  : screen - A PyGame Surface object representing the screen on
                            which we can draw game assets

        Abstract : This method accepts width and height integers 
        """
        screen = pygame.display.set_mode([width, height])
        return screen
    
    def start(self):
        self.running = True

        # Game loop
        while self.running:

            # Handle events
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    self.running = False
                    
            # Draw
            self.screen.fill((0, 0, 0))

            pygame.display.flip()
        
        pygame.quit()