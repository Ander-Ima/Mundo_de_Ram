#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int u64;


// Calcular la suma de los primeros N números primos

u64 raiz;
vector <u64> guardados {2,3}; // Se declara un vector con los 2 primeros primos, a el se le hiran agragando mas para la verififcacion de otros numeros

bool verificacion(u64& puntero){ // Variable para declarar si un numero es o no primo

    raiz = sqrt(puntero); // Se calcula la raiz del numero a verificar y se usara como limite

    for(u64 dato : guardados){ 
        if(dato > raiz) break; //Si no se encuentra un numero primo que divida a puntero hasta su raiz cuadrada, significa que puntero es primo
        if((puntero % dato) == 0){
            return 0; // No es un numero primo
        }
    }

    guardados.push_back(puntero); // Ya que es un numero primo, se agrega al vector de primos, para verificar los siguientes
    return 1;
}

void suma(u64& cantidad){ // Calcula la suma de los primeros N numeros primos

    u64 contador = 2; // Se inicializa en 2, ya que tiene la suma de los 2 primeros numeros primos(2+3=5)
    u64 suma = 5, puntero = 5; // La suma se inicialisa en 5 (Valor de los 2 primeros primos) y el puntero en 5(Es el siguiente numero primo)

    while(contador < cantidad){

        if(verificacion(puntero)) { // Si el numero ingresado (puntero) es primo se agrega a la suma
            suma += puntero;
            contador++; 
        }

        puntero += 2; // El puntero aumenta de 2 en 2, para evitar verificar los numeros pares
    }

    cout << suma << endl;
}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    u64 cantidad;
    cin >> cantidad;

    suma(cantidad);

    return 0;
}