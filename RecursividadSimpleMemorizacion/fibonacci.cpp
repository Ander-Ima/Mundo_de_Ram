// Codigo obtenido de las clases de la OOI

#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100;
const int INVALIDO = -1;

int fib(int n) {
  // Casos bases
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  // Paso recursivo
  return fib(n-1) + fib(n-2);
}

// Declarar la memoria con el numero maximo de elementos que nos
// especifique el problema.
vector<int> memo(MAX, INVALIDO);
int fib_con_memo(int n) {
  // Casos bases
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  // Revisar si ya visite este estado.
  if (memo[n] != INVALIDO) {
    return memo[n];
  }

  // Paso recursivo
  int resultado = fib_con_memo(n-1) + fib_con_memo(n-2);
  // Guardar el resultado.
  memo[n] = resultado;
  return resultado;
}



int main() {
  int n;
  cin >> n;

  // Inicializar un vector con n elementos con el valor -1
  // memo.resize(n, -1);// n = 6 -> {-1, -1, -1, -1, -1, -1}

  cout << "Fibonnaci de la posicion " << n << " es: " << fib_con_memo(n) << "\n";

  return 0;
}