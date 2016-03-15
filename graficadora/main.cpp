#include "herramientasgraficas.h"
#include <bits/stdc++.h>
using namespace std;
SDL_Surface * screen;
SDL_Surface * imagen;
SDL_Event evento;
int main(int argc, char * args[]){
   iniciar_sdl();
   crear_pantalla(600,600,screen);
   cargar_datos("img.bmp",imagen);
   int x=0;
   int y=0;
   int unidadX = 600/10;
   for(int i=0;i<20;i++){
       int a = i*unidadX;
       for(int j=0;j<10;j++){
        int b = j;
        pintar_pantalla(a,b,screen,imagen);
        pintar_pantalla(b,a,screen,imagen);
       }
   }
   while(true){
     double xTemp = (x+0.0)/unidadX;
     double yTemp= xTemp*xTemp;
     y = yTemp*unidadX;
     pintar_pantalla(x,y,screen,imagen);
     x++;
   }
   SDL_FreeSurface(imagen);
   SDL_Quit();
return 0;
}
