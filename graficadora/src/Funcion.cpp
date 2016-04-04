#include "Funcion.h"

using namespace std;
Funcion::Funcion(int _cantidadDeUnidadesEnX, int _cantidadDeUnidadesEnY,SDL_Surface*& _screen, SDL_Surface*& _imagen, function<double (double)> _funcion){
    cantidadDeUnidadesEnX=_cantidadDeUnidadesEnX;
    cantidadDeUnidadesEnY=_cantidadDeUnidadesEnY;
    screen=_screen;
    imagen=_imagen;
    funcion=_funcion;
    unidadX=screen->w/cantidadDeUnidadesEnX;
    unidadY=(screen->h/cantidadDeUnidadesEnY)-10;
}
Funcion::~Funcion(){
    SDL_FreeSurface(imagen);
    SDL_FreeSurface(screen);
}
void Funcion::actualizarFuncion(int x){
    pintarPlanoCartesiano();
    int y=0;
    while(x<=cantidadDeUnidadesEnX*unidadX){
        double xTemp = ((x+0.0)/unidadX);
        double yTemp=funcion(xTemp);
        int yPast = y;
        y = round(yTemp*unidadY);
        if(yPast==0)yPast = y;
        for(int i=min(yPast,y);i<=max(y,yPast);i++){
            pintar_pantalla(x,i,screen,imagen);
        }
        x++;
    }
}
void Funcion::imprimir(){
    SDL_Flip(screen);
}

void Funcion::eventos(){

}
void Funcion::pintarPlanoCartesiano(){
    pintarRayitas(cantidadDeUnidadesEnY,unidadY,true,screen,imagen);
    pintarRayitas(cantidadDeUnidadesEnX+1,unidadX,false,screen,imagen);
}
