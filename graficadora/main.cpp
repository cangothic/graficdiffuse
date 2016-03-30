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

    Escena x = (Escena)escena;
    escena.actualizar();
    while(true){
        escena.dibujar();
    }
//
//    Director* director = Director::getInstance();
//    director->adicionarEscena(&escena);
//    director->cambiarEscena(escena.idEscena);
//    director->ciclo();
return 0;
}
