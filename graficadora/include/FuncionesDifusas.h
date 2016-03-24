#ifndef FUNCIONESDIFUSAS_H
#define FUNCIONESDIFUSAS_H
#include <bits/stdc++.h>
using namespace std;
class FuncionesDifusas
{
    public:
        FuncionesDifusas();
        virtual ~FuncionesDifusas();
        function<double (double)> retornarTrapesoidal(double a,double b,double c,double d);
    protected:
    private:
};

#endif // FUNCIONESDIFUSAS_H
