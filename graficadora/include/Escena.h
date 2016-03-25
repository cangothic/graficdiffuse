#ifndef ESCENA_H
#define ESCENA_H
#include"Director.h"

class Escena
{
    public:
        Escena();
        void actualizar();
        void eventos();
        void dibujar();
        virtual ~Escena();


    protected:

    private:
        //Director director;
};

#endif // ESCENA_H
