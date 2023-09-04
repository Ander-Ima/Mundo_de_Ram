#include <iostream>
#include <string>
using namespace std;

int calificacion(const string& cadena, int& avanzador) {
    int suma = 0;
    int elementos = 0;

    while (avanzador < cadena.length()) {
        if (cadena[avanzador] == '(') {
            avanzador++; 
            suma += calificacion(cadena, avanzador);
            elementos++;
        } else if (cadena[avanzador] == ')') {
            avanzador++; 
            return suma / elementos; 
        } else {
            suma += cadena[avanzador] - '0'; 
            elementos++;
            avanzador++;
        }
    }

    return suma;
}

int main() {
    string cadena;
    getline(cin, cadena);

    int avanzador = 1; 
    int final = calificacion(cadena, avanzador);
    cout << final << endl;

    return 0;
}