#include "EscenaGraficadora.h"

EscenaGraficadora::EscenaGraficadora(function<double (double)> _funcion,string _idEscena,bool discreta)
{
    idEscena = _idEscena;
    funcionAgraficar=new Funcion(20,1,director->screen,director->imagen,_funcion,discreta);
}

EscenaGraficadora::~EscenaGraficadora()
{
    delete funcionAgraficar;
}
void EscenaGraficadora::actualizar()
{
    funcionAgraficar->actualizarFuncion(desplazar);
}
void EscenaGraficadora::dibujar()
{
    funcionAgraficar->imprimir();
}
void EscenaGraficadora::eventos()
{
        Uint8 *key = SDL_GetKeyState(NULL);

        if (key[SDLK_LEFT])
                desplazar+= 1;

        if (key[SDLK_RIGHT])
                desplazar-= 1;
}
