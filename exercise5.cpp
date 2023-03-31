#include "pch.h"
#include "iostream"
#include "math.h"

using namespace System;
using namespace std;


int main()
{   
    long long numero;
    int dd, mm, aaaa, tt, pp;

    int valor;
    cout << "\nIngresar codigo de barras: ";
    cin >> numero;
    dd = numero / pow(10, 10);
    valor = numero / pow(10, 8);
    mm = valor % 100;
    valor = numero / pow(10, 4);
    aaaa = valor % 10000;
    valor = numero / pow(10, 2);
    tt = valor % 100;
    pp = numero % 100;

    cout << "\nDía de vencimiento: " << dd;
    cout << "\nMes de vencimiento: " << mm;
    cout << "\nAño de vencimiento: " << aaaa;
    cout << "\nTipo de producto: " << char(tt);
    cout << "\nProducto perecible (0: No, 1: Si): " << (pp == 0)*1 + (pp != 0)*0 << endl;




    cin.get();
    cin.ignore();
    return 0;
}
