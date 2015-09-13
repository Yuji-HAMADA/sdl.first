#include <stdlib.h>
#include <SDL/SDL.h>

int main(int argc, char *argv[]) {

  SDL_Surface *gScreenSurface;
  SDL_Event ev;

  if (SDL_Init(SDL_INIT_VIDEO)) {
    return 1;
  }

  SDL_WM_SetCaption("HELLO SDL !!", NULL);

  gScreenSurface = SDL_SetVideoMode(300, 200, 24, SDL_SWSURFACE);

  while(1) {
    SDL_PollEvent(&ev);
    if(ev.type == SDL_QUIT)
      break;
  }

  SDL_Quit();
  
  return 0;
}
