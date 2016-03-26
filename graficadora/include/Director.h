#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <SDL/SDL.H>
#include"../herramientasgraficas.h"
#include"Escena.h"

class Director
{
    public:
        virtual ~Director();
        static Director *getInstance();
        void ciclo();
        void cambiarEscena(Escena escena);
        SDL_Surface * screen;
        SDL_Surface * imagen;

    private:
        Director();
        static Director* unicaInstancia;
        Escena escena;


};

#endif // DIRECTOR_H
