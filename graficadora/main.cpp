#include "herramientasgraficas.h"
SDL_Surface * screen;
SDL_Surface * imagen;
int main(int argc, char * args[]){
   iniciar_sdl();
   crear_pantalla(600,800,screen);
   cargar_datos("img.bmp",imagen);
   int x=0;
   int y=0;
   while(true){
     y=3*x;
     pintar_pantalla(x,y,screen,imagen);
     SDL_Delay(20);
     x++;
     if (x>500) {
       break;
     }
   }
   SDL_FreeSurface(imagen);
   SDL_Quit();
return 0;
}
