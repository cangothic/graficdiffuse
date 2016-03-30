#ifndef ESCENAGRAFICADORA_H
#define ESCENAGRAFICADORA_H
#include"Escena.h"
#include"Funcion.h"
#include"Director.h"
#include"../FuncionesDifusas.h"
#include<bits/stdc++.h>
using namespace std;

class EscenaGraficadora:public Escena
{
    public:
        void actualizar();
        void eventos();
        void dibujar();
        EscenaGraficadora(function<double (double)> _funcion,string _idEscena);
        virtual ~EscenaGraficadora();

    protected:

    private:
        Director *director=Director::getInstance();
        Funcion *funcionAgraficar;
};
#endif // ESCENAGRAFICADORA_H
