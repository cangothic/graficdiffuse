#include "FuncionesDifusas.h"
#include <bits/stdc++.h>
using namespace std;
FuncionesDifusas::FuncionesDifusas()
{
    //ctor
}

FuncionesDifusas::~FuncionesDifusas()
{
    //dtor
}
function<double (double)> FuncionesDifusas::retornarTrapesoidal(double a, double b, double c, double d)
{
    return [a,b,c,d](double x)->double{
        if(x<a)return 0;
        if(x>=a and x<b)return (x-a)/(b-a);
        if(x>=b and x<c)return 1;
        if(x>=c and x<d)return (d-x)/(d-c);
        return 0;
    };
}

