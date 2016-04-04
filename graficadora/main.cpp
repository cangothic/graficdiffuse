#include <bits/stdc++.h>
#include "herramientasgraficas.h"
#include "Funcion.h"
#include "FuncionesDifusas.h"
#include "Escena.h"
#include "EscenaGraficadora.h"
#include "Director.h"
using namespace std;

int main(int argc, char * args[]){
    function<double (double)> funcionPrueba = retornarTrapesoidal(1,3,4,5);
    EscenaGraficadora escena(funcionPrueba,"grafica");

    //el parametro 0 es el path del exe
    //descomentar si vas a usarlos!! si no explota boom!
    //string parametro1 = args[1]; //parametro 1
    //string parametro2 = args[2]; //parametro 2

    Escena* x = &escena;
    x->actualizar();
    while(true){
        x->dibujar();
    }
//
//    Director* director = Director::getInstance();
//    director->adicionarEscena(&escena);
//    director->cambiarEscena(escena.idEscena);
//    director->ciclo();
return 0;
}
