#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <SDL/SDL.H>
#include"../herramientasgraficas.h"
#include"Escena.h"
#include<bits/stdc++.h>
using namespace std;
class Director
{
    public:
        virtual ~Director();
        static Director *getInstance();
        void ciclo();
        void cambiarEscena(string _idEscena);
        SDL_Surface * screen;
        SDL_Surface * imagen;
        void adicionarEscena(Escena* _escena);

    private:
        map<string,Escena*> mapa;
        Director();
        static Director* unicaInstancia;
        Escena* escena;
        SDL_Event evento;


};

#endif // DIRECTOR_H
