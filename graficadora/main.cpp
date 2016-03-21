#include <bits/stdc++.h>
#include "herramientasgraficas.h"

using namespace std;
int tamHorizontal = 800;
int tamVertical = 600;
SDL_Surface * screen;
SDL_Surface * imagen;
SDL_Event evento;

enum Funciones {    Trapezoidal,
                    Gaussiana,
                    blue,
                    Bell,
                    Sigmoide    };

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
double devolverFuncion(int funcion,vector<double> parametros, double x){
    if(funcion==Trapezoidal){
        double a = parametros[0];
        double b = parametros[1];
        double c = parametros[2];
        double d = parametros[3];
        if(x<a)return 0;
        if(x>=a and x<b)return (x-a)/(b-a);
        if(x>=b and x<c)return 1;
        if(x>=c and x<d)return (d-x)/(d-c);
        return 0;
    }
    if(funcion==Gaussiana){
        double c = parametros[0];
        double a = parametros[1];
        double cuadrado = ((x-c)/a)*((x-c)/a);
        double exponente = (-1/2)*cuadrado;
    }
    if(funcion==Bell){

    }
    return 0;
}
void pintarFuncion(int limiteIzquierdo,int limiteDerecho,int &x,int &y,int unidadX,int unidadY,vector<double> parametros){
        while(x<=limiteDerecho*unidadX){
            double xTemp = ((x+0.0)/unidadX)+limiteIzquierdo;
            double yTemp= devolverFuncion(Trapezoidal,parametros,xTemp);
            int yPast = y;
            y = round(yTemp*unidadY);
            if(yPast==0)yPast = y;
            for(int i=min(yPast,y);i<=max(y,yPast);i++){
                pintar_pantalla(x,i,screen,imagen);
            }
            x++;
        }
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
    pintarRayitas(2,unidadY,true);
    pintarRayitas((limiteDerecho-limiteIzquierdo)+1,unidadX,false);
    pintarFuncion(limiteIzquierdo,limiteDerecho,x,y,unidadX,unidadY,parametros);
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
