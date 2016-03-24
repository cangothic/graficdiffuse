#include "Funcion.h"

using namespace std;
Funcion::Funcion(int _limiteIzquierdo, int _limiteDerecho, int _unidadX, int _unidadY,SDL_Surface*& _screen, SDL_Surface*& _imagen, function<double (double)> _funcion){
    limiteIzquierdo=_limiteIzquierdo;
    limiteDerecho=_limiteDerecho;
    unidadX=_unidadX;
    unidadY=_unidadY;
    screen=_screen;
    imagen=_imagen;
    funcion=_funcion;

}
Funcion::~Funcion(){
    SDL_FreeSurface(imagen);
    SDL_FreeSurface(screen);
}
void Funcion::actualizarFuncion(int x){
    int y=0;
    while(x<=limiteDerecho*unidadX){
        double xTemp = ((x+0.0)/unidadX)+limiteIzquierdo;
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

}
