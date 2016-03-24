#include <bits/stdc++.h>
#include "herramientasgraficas.h"
#include "Funcion.h"
using namespace std;
int tamHorizontal = 800;
int tamVertical = 600;
SDL_Surface * screen;
SDL_Surface * imagen;
SDL_Event evento;

enum Funciones {
    Trapezoidal,
    Gaussiana,
    blue,
    Bell,
    Sigmoide
};

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
double devolverFuncion(int funcion,double a,double b,double c,double d, double x){
    if(funcion==Trapezoidal){
//        double a = parametros[0];
//        double b = parametros[1];
//        double c = parametros[2];
//        double d = parametros[3];
        if(x<a)return 0;
        if(x>=a and x<b)return (x-a)/(b-a);
        if(x>=b and x<c)return 1;
        if(x>=c and x<d)return (d-x)/(d-c);
        return 0;
    }
//    if(funcion==Gaussiana){
//        double c = parametros[0];
//        double a = parametros[1];
//        double cuadrado = ((x-c)/a)*((x-c)/a);
//        double exponente = (-1/2)*cuadrado;
//    }
    if(funcion==Bell){

    }
    return 0;
}
int main(int argc, char * args[]){
    vector<double> parametros;
    parametros.push_back(1);
    parametros.push_back(3);
    parametros.push_back(4);
    parametros.push_back(5);
    iniciar_sdl();
    crear_pantalla(tamHorizontal,tamVertical,screen);
    cargar_datos("img.bmp",imagen);
    int limiteIzquierdo = 0;
    int limiteDerecho = 15;
    int x=0,y=0;
    int unidadX = tamHorizontal/(limiteDerecho-limiteIzquierdo);
    int unidadY = tamVertical-100;
    double(*func)(double)=[](double x){return devolverFuncion(Trapezoidal,1,3,4,5,x);};
    Funcion funcionUno(limiteIzquierdo,limiteDerecho,unidadX,unidadY,screen,imagen,func);
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
