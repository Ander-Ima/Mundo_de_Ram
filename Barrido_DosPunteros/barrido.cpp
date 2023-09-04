#include <bits/stdc++.h>
using  namespace std;

int resultado(int& longitud, vector <int>& numeros){

    int suma = 0 , maximo;

    for(int i = 0; i < longitud; i++){

        suma = suma + numeros[i];

    }

    maximo = suma;

    for(int i = longitud; i < numeros.size(); i++){
        
        suma = suma + numeros[i] - numeros[i-longitud];
        
        maximo = max(suma, maximo);

    }

    return maximo;
}


int main(){

    int tamano, longitud;
    cin >> tamano >> longitud;

    vector <int> numeros(tamano);

    for(int i = 0; i < tamano; i ++){

        cin >> numeros[i];

    }

    cout << resultado(longitud, numeros) << endl;

    return 0;
}