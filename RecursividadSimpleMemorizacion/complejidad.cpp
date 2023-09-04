// Codigo obtenido de las clases de la OOI

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Operaciones con complejidad constante.
  //  Solamente necesitan 1 instruccion para completarse.
  // O(1)
  cout << "hola\n";
  int x = 5;
  int y = 10;
  int c = x + y;
  cout << "Resultado de la suma es: " << c << "\n";

  c = x - y;
  c = x * y;
  c = x / y;
  c = x & y;

  c = x != y;
  vector<int> arreglo;

  // Algoritmos con complejidad lineal.
  //  Necesitan n instrucciones para completarse.
  // O(n)
  // En el caso del algoritmo de abajo, la instruccion se ejecutara 100 veces, por lo tanto
  // la complejidad es O(100)
  int limite = 100;
  for (int i = 0; i < limite; ++i) {
    cout << "Hola. Valor de i: " << i << "\n";
  }
  ///////////
  // Complejidad: O(n) lineal
  // La cantidad de veces que se ejecuta la instruccion es 80. Es decir O(80)
  int valor = 80;
  while (valor > 0) {
    valor--;
  }

  /////////
  // Complejidad: Lineal
  // O(m)
  int m;
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int a = i;
    a++;
    int x = 4 * a;
    cout << x;
  }


  ///////////////////////
  // Complejidad cuadratica
  // O(n * n)
  int n = 10;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << "Hi!\n";
    }
  }

  /// Complejidad: O(n * n * n)
  int contador = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        cout << "El contador vale: " << contador++ << "\n";
      }
    }
  }


  return 0;
}