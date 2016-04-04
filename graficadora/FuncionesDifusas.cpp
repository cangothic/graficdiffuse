#include "FuncionesDifusas.h"
using namespace std;
function<double (double)> retornarTrapesoidal(double a, double b, double c, double d)
{
    return [a,b,c,d](double x)->double{
        if(x<a)return 0;
        if(x>=a and x<b)return (x-a)/(b-a);
        if(x>=b and x<c)return 1;
        if(x>=c and x<d)return (d-x)/(d-c);
        return 0;
    };
}
function<double (double)> retornarGaussiana(double a,double c){
    return [c,a](double x)->double{
        return exp(-0.5*pow((x-c)/a,2));
    };
}
function<double (double)> retornarBell(double a,double b,double c){
    return [a,b,c](double x)->double{
        return 1/(1+pow(fabs((x-c)/a),(2*b)));
    };
}
function<double (double)> retornarSigmoide(double a,double b){
    return [a,b](double x)->double{
      return 1/(1+exp(-a*(x-b)));
    };
}
