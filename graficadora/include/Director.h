#ifndef DIRECTOR_H
#define DIRECTOR_H
#include"Escena.h"

class Director
{
    public:
        virtual ~Director();
        static Director *getInstance();
        void ciclo();
        void cambiarEscena(Escena escena);
    private:
        Director();
        static Director* unicaInstancia;
        Escena escena;

};

#endif // DIRECTOR_H
