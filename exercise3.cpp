#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int main()
{   
    short neumaticos;
    int precioPorNeumatico;
    int precioTotal;
    short menos_3, menos_3_5, mas_5;
    cout << "Neumáticos comprados: ";
    cin >> neumaticos;
    menos_3 = (neumaticos < 3) * (neumaticos * 145);
    menos_3_5 = (3 <= neumaticos && neumaticos <= 5) * (neumaticos * 138);
    mas_5 = (5 < neumaticos) * (neumaticos * 135);

    cout << "El monto total es " << menos_3 + menos_3_5 + mas_5;

    cin.get();
    cin.ignore();
    return 0;
}
