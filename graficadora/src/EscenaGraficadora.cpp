#include "EscenaGraficadora.h"

EscenaGraficadora::EscenaGraficadora(function<double (double)> _funcion,string _idEscena)
{
    idEscena = _idEscena;
    funcionAgraficar=new Funcion(20,1,director->screen,director->imagen,_funcion);
}

EscenaGraficadora::~EscenaGraficadora()
{
    delete funcionAgraficar;
}
void EscenaGraficadora::actualizar()
{
    funcionAgraficar->actualizarFuncion();
}

void EscenaGraficadora::dibujar()
{
    funcionAgraficar->imprimir();
}


void EscenaGraficadora::eventos()
{
}
