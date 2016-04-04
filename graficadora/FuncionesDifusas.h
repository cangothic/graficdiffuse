#ifndef FUNCIONESDIFUSAS_H
#define FUNCIONESDIFUSAS_H
#include <bits/stdc++.h>
using namespace std;
function<double (double)> retornarTrapesoidal(double a,double b,double c,double d);
function<double (double)> retornarGaussiana(double a,double c);
function<double (double)> retornarBell(double a,double b,double c);
function<double (double)> retornarSigmoide(double a,double b);
#endif
