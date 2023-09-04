#include <iostream>
#include <vector>
using namespace std;

const int MAX = 40;
const int INVALIDO = 1;

vector<int> memo(MAX, INVALIDO);

int recumeri(int numero) {

  // Casos bases
  if (numero <= 3){
    return 1;
  }

  if (memo[numero] != INVALIDO) {
    return memo[numero];
  }

  int resultado = recumeri(numero-1)+recumeri(numero-2)+recumeri(numero-3);
  memo[numero] = resultado;
  return resultado;

}



int main (){

  int numero;
  cin >> numero;

  cout << recumeri(numero);

    return 0;

}