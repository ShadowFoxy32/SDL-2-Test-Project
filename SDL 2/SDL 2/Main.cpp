#include <SDL.h>
#include <Windows.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL_image.h>
#include <SDL_opengl.h>
#include <SDL_net.h>

int main(int argc, char* argv[]) {
	bool GameLoop;
	bool testbool;
	const Uint8* keyboard_state_array = SDL_GetKeyboardState(NULL);

	SDL_Init(SDL_INIT_EVERYTHING);

	auto win = SDL_CreateWindow("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WindowFlags::SDL_WINDOW_ALLOW_HIGHDPI);

	auto ren = SDL_CreateRenderer(win, -1, SDL_RendererFlags::SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(ren, 255, 0, 0, 0);
	SDL_RenderClear(ren);
	



	SDL_Event e;
	SDL_Event e1;
	auto test = "G:/C++/SDL 2/Debug/res/X.wav";
	Mix_Music* music;
	
	


	printf(Mix_GetError());
	Mix_OpenAudio(22050, AUDIO_F32, 2, 4096);

	music = Mix_LoadMUS(test);
	Mix_VolumeMusic(30);
	Mix_PlayMusic(music, -1);
	SDL_Rect rect;
	
	SDL_Surface dst;
	rect.h = 32;
	rect.w = 32;
	rect.x = 0;
	rect.y = 32;
	
	GameLoop = true;
	
	SDL_RenderDrawRect(ren, &rect);
	SDL_SetRenderDrawColor(ren, 45, 54, 1, 255);
	SDL_RenderFillRect(ren, &rect);


	testbool = true;
	

	while (GameLoop == true) {
		

		
		SDL_PollEvent(&e);
		SDL_RenderPresent(ren);
		if (e.type == SDL_QUIT) {
			GameLoop = false;
			return 0;

			
		}
		if (e.type == SDL_KEYDOWN) {
			switch (e.key.keysym.sym)
			{
			case SDLK_UP:
			

				break;
			//case SDLK_DOWN:

				//rect.y += 10;
				//break;
			//case SDLK_TAB:
				//break;
			}
			if (testbool == true) {
				rect.y -= 0;
			}

		}
		 
		
		

			
		}


}