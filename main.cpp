#include <SDL/SDL.H>
#include <string>
using namespace std;
SDL_Surface * screen;
SDL_Surface * imagen;


void iniciar_sdl(){
    if(SDL_Init(SDL_INIT_VIDEO)<0){
    fprintf(stderr,"Error no se puede iniciar el subsistema Video %s",SDL_GetError());
    exit(1);
    }
}

void crear_pantalla(int x, int y){
    screen = SDL_SetVideoMode(y,x,32,SDL_SWSURFACE);
    if(screen == NULL){
    fprintf(stderr,"Error crear la pantalla %s",SDL_GetError());
    exit(1);
    }
}

void cargar_datos(string direccionImagen,SDL_Surface * &_imagen){
    _imagen = SDL_LoadBMP(direccionImagen.c_str());
    if(imagen == NULL){
    fprintf(stderr,"Error cargar la imagen %s",SDL_GetError());
    exit(1);
    }
}

void pintar_pantalla(int &_x,int &_y){
    SDL_Rect origen;
    origen.x=(0);
    origen.y=(0);
    origen.w=(3);
    origen.h=(3);
    SDL_Rect destino;
    destino.x=(_x);
    destino.y=(800-_y);
    SDL_BlitSurface(imagen,&origen,screen,&destino);
    SDL_Flip(screen);
}

int main(int argc, char * args[]){
   iniciar_sdl();
   crear_pantalla(600,800);
   cargar_datos("img.bmp",imagen);
   int x=0;
   int y=0;
   while(true){
     y=3*x;
     pintar_pantalla(x,y);
     SDL_Delay(10);
     x++;
     if (x>500) {
       break;
     }
   }
   SDL_FreeSurface(imagen);
   SDL_Quit();
return 0;
}
