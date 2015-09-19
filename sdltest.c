/* #include <stdlib.h> */
#include <SDL/SDL.h>

int main(int argc, char *argv[]) {

  SDL_Surface *gScreenSurface, *image;
  SDL_Event ev;
  SDL_Rect rect, scr_rect;

  if (SDL_Init(SDL_INIT_VIDEO)) {
    return 1;
  }

  SDL_WM_SetCaption("HELLO SDL !!", NULL);

  gScreenSurface = SDL_SetVideoMode(300, 200, 24, SDL_SWSURFACE);

  image = SDL_LoadBMP("dq3.bmp");

  rect.x = 0;
  rect.y = 0;
  rect.w = image->w;
  rect.h = image->h;

  scr_rect.x = 0;
  scr_rect.y = 0;

  SDL_BlitSurface(image, &rect, SDL_GetVideoSurface(), &scr_rect);

  SDL_Flip(SDL_GetVideoSurface());

  while(1) {
    SDL_PollEvent(&ev);
    if(ev.type == SDL_QUIT)
      break;
  }

  SDL_Quit();
  
  return 0;
}
