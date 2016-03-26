#ifndef ESCENAGRAFICADORA_H
#define ESCENAGRAFICADORA_H
#include"Escena.h"
#include"Funcion.h"
#include"Director.h"

class EscenaGraficadora:public Escena
{
    public:
        void actualizar();
        void eventos();
        void dibujar();
        EscenaGraficadora();
        virtual ~EscenaGraficadora();

    protected:

    private:
        Director *director=Director::getInstance();
        //Funcion funcionAgraficar;
};
#endif // ESCENAGRAFICADORA_H
