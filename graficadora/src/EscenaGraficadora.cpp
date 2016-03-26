#include "EscenaGraficadora.h"

EscenaGraficadora::EscenaGraficadora(function<double (double)> _funcion)
{
    funcionAgraficar=new Funcion(10,1,director->screen,director->imagen,_funcion);
}

EscenaGraficadora::~EscenaGraficadora()
{
    delete funcionAgraficar;
}
void EscenaGraficadora::actualizar()
{
    funcionAgraficar->actualizarFuncion();
}

void EscenaGraficadora::eventos()
{

}

void EscenaGraficadora::dibujar()
{
    funcionAgraficar->imprimir();
}
