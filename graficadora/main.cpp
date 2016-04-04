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
    string a=args[2];
    string b=args[3];
    string c=args[4];
    string d=args[5];
    SDL_Event evento;
    function<double (double)> funcionAGraficar;
    if(funcion=="Trapezoidal"){
        funcionAGraficar = retornarTrapesoidal(1,3,4,5);
    }else if(funcion=="Gaussiana"){
        funcionAGraficar = retornarGaussiana(0.3,0.5);
    }else if(funcion=="Bell"){
        funcionAGraficar = retornarBell(0.3,4,0.5);
    }else if(funcion=="Sigmoide"){
        funcionAGraficar = retornarSigmoide(3,2);
    }
    EscenaGraficadora escena(funcionAGraficar,"grafica");
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
