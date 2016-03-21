#include "Funcion.h"

using namespace std;
Funcion::Funcion(int _limiteIzquierdo,int _limiteDerecho,int _x,int _y,int _unidadX,
                 int _unidadY,SDL_Surface * &_screen,SDL_Surface * &_imagen){
}

Funcion::~Funcion(){
}
void Funcion::actualizarFuncion(double funcion(double)){
    while(x<=limiteDerecho*unidadX){
        double xTemp = ((x+0.0)/unidadX)+limiteIzquierdo;
        double yTemp= funcion(xTemp);
        int yPast = y;
        y = round(yTemp*unidadY);
        if(yPast==0)yPast = y;
        for(int i=min(yPast,y);i<=max(y,yPast);i++){
            pintar_pantalla(x,i,screen,imagen);
        }
        x++;
    }
}
void Funcion::imprimir()
{

}

void Funcion::eventos()
{

}
