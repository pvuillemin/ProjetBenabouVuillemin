#include "load_image.h"

SDL_Surface* load_image(std::string filename)
{
	//Temporary storage for the image that's loaded 	
	SDL_Surface* loadedImage = NULL; 

	//The optimized image that will be used 	
	SDL_Surface* optimizedImage = NULL;

	//Load the image
	loadedImage = IMG_Load( filename.c_str() );

	//If nothing went wrong in loading the image
	 if (loadedImage != NULL)
	 {
		//Create an optimized image
        optimizedImage = SDL_DisplayFormat( loadedImage );

		//Free the old image
		SDL_FreeSurface( loadedImage );

		//Return the optimized image
		return optimizedImage;
	 }
}