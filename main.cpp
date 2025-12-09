#include <iostream>
#include "vectores.h"
#include "multiplicar.h"
using namespace std;

int main(){
    vectores a, b;
    int num;
    system("cls");
    cout<<"MULTIPLICACION VECTORIAL\n\n";
    cout <<"Ingrese los valores:\n\n";
    cout <<"Vector a:\n";
    cout <<"\ti: "; cin >> a.i;
    cout <<"\tj: "; cin >> a.j;
    cout <<"\tk: "; cin >> a.k;

    cout <<"Vector b:\n";
    cout <<"\ti: "; cin >> b.i;
    cout <<"\tj: "; cin >> b.j;
    cout <<"\tk: "; cin >> b.k;

    cout << "\nEscoger multiplicacion:\n";
    cout << "1. (a x b)\n";
    cout << "2. (b x a)\n";
    cout << "Opcion nro: "; cin >> num;

    if(num==1){
        cout << "\nProducto Vectorial: ";
        valorR(a,b);
    } else if (num==2){
        cout << "\nProducto Vectorial: ";
        valorR(b,a);
    } else {
        cout << "Opcion Inválida";
    }
    return 0;
}