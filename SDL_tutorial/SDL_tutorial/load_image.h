#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include <string>
SDL_Surface* load_image(std::string filename);
void Apply_surface(int x, int y, SDL_Surface* source, SDL_Surface* destination);