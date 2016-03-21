#ifndef FUNCION_H
#define FUNCION_H
#include <SDL/SDL.H>
#include "../herramientasgraficas.h"
#include <bits/stdc++.h>

class Funcion
{
    public:
        Funcion(int _limiteIzquierdo,int _limiteDerecho,int _unidadX,int _unidadY,SDL_Surface * &_screen,SDL_Surface * &_imagen,double(*_funcion)(double));
        //constructor inicializa las variables del objeto
        void pintarPlanoCartesiano();
        //pinta el plano cartesiano;
        void actualizarFuncion(int x,int y);
        //actualiza la suoerficie
        void imprimir();
        //muestra la suoerficie
        void eventos();
        //hace acciones segun la entrada por teclado
        virtual ~Funcion();

    protected:

    private:
        SDL_Surface * screen;
        SDL_Surface * imagen;
        int limiteIzquierdo;
        //desde donde se va a pintar la funucion
        int limiteDerecho;
        //hasta donde se va a pintar la funcion
        int unidadX,unidadY;
        //unidad que representa la forma en que se va pintar la funcion
        double(*funcion)(double);

};

#endif // FUNCION_H
