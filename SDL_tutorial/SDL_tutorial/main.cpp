#include "SDL.h" 
#include <string>
#include "SDL_image.h"
#include "load_image.h"

int main( int argc, char* args[] ) 
{   
	//The attributes of the screen 
	const int SCREEN_WIDTH = 640; 
	const int SCREEN_HEIGHT = 480; 
	const int SCREEN_BPP = 32;

	// Initializing images
	SDL_Surface* message = NULL;
	SDL_Surface* screen = NULL;
    SDL_Surface* background = NULL;


	//Initialize
	if (SDL_Init( SDL_INIT_EVERYTHING )==-1)
	{
	return 1;
	}

	//Set up the screen
	screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );

	if (screen == NULL)
	{
	return 2;
	}

	//Set the windows caption
	SDL_WM_SetCaption( "Hello", NULL );

	//Load images
	message = load_image("hello.bmp");
	background = load_image("background1.png");

	//Apllication of the surfaces
	Apply_surface(0,0,background,screen);
	Apply_surface(140,180,message,screen);

	 //Update	Screen 
	
	if (SDL_Flip( screen )==-1)
	{
		return 3; 
	}

	//Pause 
	SDL_Delay( 2000 );

	 //Free the loaded image 
	SDL_FreeSurface( message );
	SDL_FreeSurface( background );
	//Quit SDL
	SDL_Quit();
	
	
	return 0; 
}