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

void pintar_pantalla(int _x,int _y,SDL_Surface * &screen,SDL_Surface * &_imagen){

    SDL_Rect origen;
    origen.x=(_x);
    origen.y=(screen->h-_y);
    origen.w=(1);
    origen.h=(1);
    SDL_FillRect(screen, &origen, SDL_MapRGBA(screen->format,0,0,0,0));
}
void pintarRayitas(int cantidad,int unidad,bool isVertical,SDL_Surface * &screen,SDL_Surface * &imagen){
    for(int i=0;i<cantidad+5;i++){
        int a = i*unidad;
        for(int j=0;j<20;j++){
            int b = j;
            if(isVertical){
                pintar_pantalla(b,a,screen,imagen);
            }else{
                pintar_pantalla(a,b,screen,imagen);
            }
        }
    }
}
