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
    }

/*    Director* director = Director::getInstance();
    director->adicionarEscena(&escena);
    director->cambiarEscena(escena.idEscena);
    director->ciclo();*/
    return 0;
}
