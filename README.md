# The Duelist

[![style](https://github.com/christian-westbrook/the-duelist/actions/workflows/style.yml/badge.svg)](https://github.com/christian-westbrook/the-duelist/actions/workflows/style.yml)

A deceptively simple game of high-stakes text-based dueling by Christian Westbrook

# Objective

The goal of this project is to experiment with a networked and tick-based textual game engine. Players will take on the role of a duelist that must navigate a dungeon environment to find and kill their adversary. Inspirations are [RuneScape Classic](https://rsc.vet/), the [Wilderness](https://classic.runescape.wiki/w/Wilderness), and the [dungeoneering skill](https://runescape.wiki/w/Dungeoneering) from [RuneScape 3](https://www.runescape.com/community).

# Table of Contents

[Status](#status)
[Roadmap][#Roadmap]
[Installation](#installation)
[Gameplay][#gameplay]
[Design](#design)

# Status

This (soon to be) game is in active development. At any point you can follow along and play by downloading and running the latest release.

# Roadmap

- [ ] Client application with a game window
- [ ] Keyboard event handling
- [ ] Game server that serves a world of textually navigable rooms
- [ ] Situational text interface for clients
- [ ] Session instancing
- [ ] Session chat
- [ ] Combat system

# Installation

TODO

# Gameplay

The game currently consists of a blank window that will open and do absolutely nothing until you either press the `Esc` key or close the window. This demonstrates that we can:

- [ ] Successfully build the game
- [ ] Open a window
- [ ] Handle keyboard input

Check out the [roadmap](#roadmap) to learn more about what's coming up!

# Design

The player will take on the role of a participant of mutually agreed upon mortal combat. I don't know at the onset of the project why our characters are (seemingly) so willing to risk their lives, but I hope to discover this by the game's release. I plan to allow the narrative to reveal itself to me during development.

The game's networking architecture will consist of a game server and a client application that communicate over sockets. While this concept for a game could more easily be implemented as a local single player game, I'm partially using this project as a stepping stone towards designing more interesting online roleplaying games. 

Players will use the client application to connect to a game server and be given the choice to either play solo or to matchmake with other players. In either case the client application will primarily serve as an interface with the player for input and output while game logic will be performed on the game server. The server should be capable of supporting multiple independent sessions of the duelist. I'd love to make this component extensible so that future networked game sessions could be served by the same server hardware.

Once connected to a game session, the player will control one of two participants in a duel. The player will navigate a small map of textually described and navigable rooms to find and kill their opponent. I plan to combine a simple rock-paper-scissors-esque pattern of strengths and weaknesses with risky utility actions (disarm as an example) to provide variety in combat.

The interface should be simple. The player should receive continuous textual inputs in a consistent space about their current position within the game and any relevant positional or situational information. They player should also have an interface allowing them to type and send commands representing the next action for their duelist to perform. My hypothesis is that a tick-based game engine will allow for the feeling of a duel happening in real time while allowing a reasonable amount of time for the player to process a given situation and respond with textual commands. If this goes well, I'd love to continue building on this idea.