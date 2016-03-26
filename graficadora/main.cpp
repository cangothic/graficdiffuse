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


int main(int argc, char * args[]){
    iniciar_sdl();
    crear_pantalla(tamHorizontal,tamVertical,screen);
    cargar_datos("img.bmp",imagen);
    function<double (double)> funcionPrueba = retornarTrapesoidal(1,3,4,5);
    Funcion funcionUno(10,1,screen,imagen,funcionPrueba);
    funcionUno.actualizarFuncion();
    while(true){
        funcionUno.imprimir();
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
