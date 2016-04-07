#ifndef FUNCION_H
#define FUNCION_H
#include <SDL/SDL.H>
#include "../herramientasgraficas.h"
#include <bits/stdc++.h>
using namespace std;
class Funcion
{
    public:
        Funcion(int _cantidadDeUnidadesEnX, int _cantidadDeUnidadesEnY,SDL_Surface*& _screen, SDL_Surface*& _imagen, function<double (double)> _funcion,bool _discreta);
        //constructor inicializa las variables del objeto
        void actualizarFuncion(int desplazamiento=0);
        //actualiza la suoerficie
        void imprimir();
        //muestra la suoerficie
        void eventos();
        //hace acciones segun la entrada por teclado
        virtual ~Funcion();

    protected:

    private:
        void pintarPlanoCartesiano();
        bool complemento=false;
        SDL_Surface * screen;
        SDL_Surface * imagen;
        int cantidadDeUnidadesEnX;
        //desde donde se va a pintar la funucion
        int cantidadDeUnidadesEnY;
        //hasta donde se va a pintar la funcion
        int unidadX,unidadY;
        //unidad que representa la forma en que se va pintar la funcion
        function<double (double)> funcion;
        bool discreta;

};

#endif // FUNCION_H
