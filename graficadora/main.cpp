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
    SDL_Event evento;
    function<double (double)> funcionPrueba = retornarTrapesoidal(1,3,4,5);
    function<double (double)> funcionPrueba2 = retornarGaussiana(0.3,0.5);
    function<double (double)> funcionPrueba3 = retornarBell(0.3,4,0.5);
    function<double (double)> funcionPrueba4 = retornarSigmoide(3,2);
    EscenaGraficadora escena(funcionPrueba4,"grafica");
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

/*    Director* director = Director::getInstance();
    director->adicionarEscena(&escena);
    director->cambiarEscena(escena.idEscena);
    director->ciclo();*/
    return 0;
}
