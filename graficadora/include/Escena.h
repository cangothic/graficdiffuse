#ifndef ESCENA_H
#define ESCENA_H
#include<bits/stdc++.h>
using namespace std;
class Escena
{
    public:
        Escena();
        virtual void actualizar();
        virtual void eventos();
        virtual void dibujar();
        virtual ~Escena();


    protected:

    private:
        string idEscena;
};

#endif // ESCENA_H
