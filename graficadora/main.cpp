#include <bits/stdc++.h>
#include "herramientasgraficas.h"
#include "Funcion.h"
#include "FuncionesDifusas.h"
using namespace std;
int tamHorizontal = 800;
int tamVertical = 600;
SDL_Surface * screen;
SDL_Surface * imagen;
SDL_Event evento;

//enum Funciones {
//    Trapezoidal,
//    Gaussiana,
//    blue,
//    Bell,
//    Sigmoide
//};

void pintarRayitas(int cantidad,int unidad,bool isVertical){
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
int main(int argc, char * args[]){
    iniciar_sdl();
    crear_pantalla(tamHorizontal,tamVertical,screen);
    cargar_datos("img.bmp",imagen);
    int limiteIzquierdo = 0;
    int limiteDerecho = 10;
    int x=0,y=0;
    int unidadX = tamHorizontal/(limiteDerecho-limiteIzquierdo);
    int unidadY = tamVertical-100;
    FuncionesDifusas funcionDifusaUno;
    function<double (double)> funcionPrueba = funcionDifusaUno.retornarTrapesoidal(1,3,4,5);
    Funcion funcionUno(limiteIzquierdo,limiteDerecho,unidadX,unidadY,screen,imagen,funcionPrueba);
    pintarRayitas(2,unidadY,true);
    pintarRayitas((limiteDerecho-limiteIzquierdo)+1,unidadX,false);
    funcionUno.actualizarFuncion();
    while(true){
        SDL_Flip(screen);
        while ( SDL_PollEvent(&evento)){
            if(evento.type==SDL_QUIT){
                exit(0);
            }
        }
    }

    SDL_FreeSurface(imagen);
    SDL_Quit();
return 0;
}
