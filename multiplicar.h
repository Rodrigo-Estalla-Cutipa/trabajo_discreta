#ifndef MULTIPLICAR_H
#define MULTIPLICAR_H

#include <iostream>
#include "vectores.h"
using namespace std;

void valorR(vectores a, vectores b){
    vectores r;
    bool s;

    r.i = (a.j * b.k) + (a.k * b.j * (-1));
    r.j = (a.k * b.i) + (a.i * b.k * (-1));
    r.k = (a.i * b.j) + (a.j * b.i * (-1));

    cout << "Vector Resultante: " << r.i << "i ";
    if(r.j>=0){cout << "+ ";}
    cout << r.j << "j ";
    if(r.k>=0){cout << "+ ";}
    cout << r.k <<"k";
}

#endif