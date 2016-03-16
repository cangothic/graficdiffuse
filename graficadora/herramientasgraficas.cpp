#include "herramientasgraficas.h"
void iniciar_sdl(){
    if(SDL_Init(SDL_INIT_VIDEO)<0){
    fprintf(stderr,"Error no se puede iniciar el subsistema Video %s",SDL_GetError());
    exit(1);
    }
}

void crear_pantalla(int x, int y,SDL_Surface * &screen){
    screen = SDL_SetVideoMode(x,y,32,SDL_SWSURFACE);
    if(screen == NULL){
    fprintf(stderr,"Error crear la pantalla %s",SDL_GetError());
    exit(1);
    }
}

void cargar_datos(string direccionImagen,SDL_Surface * &_imagen){
    _imagen = SDL_LoadBMP(direccionImagen.c_str());
    if(_imagen == NULL){
    fprintf(stderr,"Error cargar la imagen %s",SDL_GetError());
    exit(1);
    }
}

void pintar_pantalla(int &_x,int &_y,SDL_Surface * &screen,SDL_Surface * &_imagen){
    SDL_Rect origen;
    origen.x=(0);
    origen.y=(0);
    origen.w=(1);
    origen.h=(1);
    SDL_Rect destino;
    destino.x=(_x);
    destino.y=(screen->h-_y);
    SDL_BlitSurface(_imagen,&origen,screen,&destino);
    SDL_Flip(screen);
}
