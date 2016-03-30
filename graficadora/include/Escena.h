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
        string idEscena;

    protected:

    private:

};

#endif // ESCENA_H
