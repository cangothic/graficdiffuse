#include <bits/stdc++.h>
#include "herramientasgraficas.h"
#include "Funcion.h"
#include "FuncionesDifusas.h"
#include "Escena.h"
#include "EscenaGraficadora.h"
#include "Director.h"
#include <SDL/SDL.h>
using namespace std;

int main(int argc, char * args[]){
    string funcion=args[1];

    double valorA = atof(args[2]);
    double valorB = atof(args[3]);
    double valorC = atof(args[4]);
    double valorD = atof(args[5]);
    string valorDiscretoParametro = args[6];
    bool valorDiscreto = false;
    if(valorDiscretoParametro=="true"){
        valorDiscreto = true;
    }
    SDL_Event evento;
    function<double (double)> funcionAGraficar;
    if(funcion=="Trapezoidal"){
        funcionAGraficar = retornarTrapesoidal(valorA,valorB,valorC,valorD);
    }else if(funcion=="Gaussiana"){
        funcionAGraficar = retornarGaussiana(valorA,valorC);
    }else if(funcion=="Bell"){
        funcionAGraficar = retornarBell(valorA,valorB,valorC);
    }else if(funcion=="Sigmoide"){
        funcionAGraficar = retornarSigmoide(valorA,valorB);
    }
    EscenaGraficadora escena(funcionAGraficar,"grafica",valorDiscreto);
    /*args[0] es el path del .exe*/
    if(argc>1){
        for(int i=1;i<argc;i++){
            string parametro = args[i];
            cout<<"el parametro "<<i<<" es "<<parametro<<endl;
        }
    }
    else{
        cout<<"no tienes parametros"<<endl;
    }
    Escena* x = &escena;
    x->actualizar();
    while(true){
        x->dibujar();
        while ( SDL_PollEvent(&evento)){
            if(evento.type==SDL_QUIT){
                exit(0);
            }
        }
    }
    return 0;
}
