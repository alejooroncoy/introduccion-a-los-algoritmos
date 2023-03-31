#include "iostream"
#include "math.h"

using namespace std;

int main() {
  int cantidad;
  int restante, cantidadDe5, cantidadDe2, cantidadDe1;
  cout << "Introduzca cantidad de dinero: ";
	cin >> cantidad;
  cantidadDe5 = trunc(cantidad / 5);
	restante = cantidad % 5;
	if(restante == 0)  {
    cout << cantidadDe5 << " monedas de 5, 0 monedas de 2 y 0 monedas de 1\n";
  } else {
		cantidadDe2 = trunc(restante / 2);
		restante = restante % 2;
		if(restante == 0) {
			cout << cantidadDe5 << " monedas de 5 , " << cantidadDe2 << " monedas de 2 y 0 monedas de 1\n";
    }
		else {
			cantidadDe1 = restante;
			cout << cantidadDe5 << " monedas de 5 , " << cantidadDe2 << " monedas de 2 y " << cantidadDe1 << " monedas de 1\n";
    }
  }
  cin.get();
  cin.ignore();
  
  return 0;
}