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
    function<double (double)> funcionAGraficar=retornarTrapesoidal(1,2,3,4);
    EscenaGraficadora escena(funcionAGraficar,"grafica",false);
    Director* director=Director::getInstance();
    director->adicionarEscena(&escena);
    director->cambiarEscena(escena.idEscena);
    director->ciclo();
    return 0;
}
