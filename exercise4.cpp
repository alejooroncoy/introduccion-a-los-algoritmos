#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char VorF(bool condition) {
    return char(condition * 86 + !condition * 70);
}

int main()
{   
    short A, B, C;
    bool escaleno, isosceles, equilatero;
    cout << "\nIngresar lado A: ";
    cin >> A;
    cout << "\nIngresar lado B: ";
    cin >> B;
    cout << "\nIngresar lado C: ";
    cin >> C;

    equilatero = A == B && A == C;
    isosceles = !equilatero && (A == B || A == C || B == C);
    escaleno = !equilatero && !isosceles;

    cout << "\nEquil" << char(160) << "tero: " << VorF(equilatero) << endl;
    cout << "Is" << char(162) << "sceles: " << VorF(isosceles) << endl;
    cout << "Escaleno: " << VorF(escaleno) << endl;


    cin.get();
    cin.ignore();
    return 0;
}
