#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


vector<int> contarDivisores(const vector<int>& numeros) {
    vector<int> cantidadDivisores;

    for (int numero : numeros) {
        int contador = 1;
        int limite = sqrt(numero); 

 
        for (int i = 2; i <= limite; i++) {
            int exponente = 0;

            while (numero % i == 0) {
                numero /= i;
                exponente++;
            }

            contador *= (exponente + 1);
        }

      
        if (numero > 1) {
            contador *= 2;
        }

        cantidadDivisores.push_back(contador);
    }

    return cantidadDivisores;
}

int main() {
    int casos;
   
    cin >> casos;

    vector<int> numeros(casos);

    for (int i = 0; i < casos; i++) {
    
        cin >> numeros[i];
    }

    vector<int> cantidadDivisores = contarDivisores(numeros);

    for (int i = 0; i < casos; i++) {
        cout << cantidadDivisores[i] << endl;
    }

    return 0;
}