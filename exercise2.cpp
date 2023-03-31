#include "iostream"
#include "math.h"

using namespace std;

int main() {
  int x1, y1, x2, y2;
  float distancia, pendiente, angulo;
  cout << "Introduzca x1: ";
  cin >> x1;
  cout << "Introduzca y1: ";
  cin >> y1;
  cout << "Introduzca x2: ";
  cin >> x2;
  cout << "Introduzca y2: ";
  cin >> y2;
  distancia = pow(pow(x2 - x1, 2) + pow(y2-y1, 2), 0.5);
  cout << "La distancia entre los puntos es: " << distancia << "\n";
  if(x2-x1 != 0) {
  pendiente = (y2-y1)/(x2-x1);
  angulo = atan(pendiente) *  57.29578;
  cout << "El ángulo hacia la horizontal es de " << angulo << " grados\n";
  }else {
    cout << "El ángulo x2 y x1 no pueden ser iguales, por favor intentalo probar con otras coordenadas.\n";
  }
  cin.get();
  cin.ignore();

  return 0;
}


