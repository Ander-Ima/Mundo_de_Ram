#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int u64;

// Dado 2 numeros, A y B, calcular la ultima cifra de A^B

void nestor(u64& modulo, u64& exponente){

    // Se creara un vector que contendra  los valores de las ultimas cifras de (A%10)*modulo, y ya que esto se convierte en una sucesion en cualquier momento, se puede adivinar el valor que tomara
    // la cifra en la posicion B => A^B

    vector<u64> digitos;

    digitos.push_back(modulo);  // Se agrega la primera cifra, que sera modulo^1.

    u64 primera = (modulo * modulo) % 10; // Se calcula la ultima cifra de modulo^2 y posteriormete se agrega al vector
    
    digitos.push_back(primera);

    primera = (primera * modulo) % 10;

    while (primera != digitos[0]) 
     // Se sigue la multiplicacion de las ultimas cifras solamente, multiplicadas por el modulo(ultima cifra de la base)
    // Hasta que primera == modulo
    {
        digitos.push_back(primera);
        primera = (primera * modulo) % 10;

    }
    
    u64 tamano = digitos.size(); 
    
    exponente = exponente % tamano;

    // Se calcula la cifra que le corresponde a A^B, en base a el tamaño del vector y se devuelve esa posicion - 1;

    if(exponente == 0){
        cout << digitos.back() << endl;
    }
    else{
        cout << digitos[exponente-1] << endl ;
    }


}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int pruebas;

    cin >> pruebas;

    u64 base, exponente;
    u64 modulo;

    for(int i = 0; i < pruebas; i++){

        cin >> base >> exponente;

        modulo = base % 10; // Se obtiene la ultima cifra de la base, ya que en un multiplicacion, siempre se va a multiplicar la ultima cifra por la ultima, asi que el resultado
        // de esta no es influido por las demas cifras del numero, y ya que siempre se estara elevando se podra decir que la ultima cifra por la que se multiplicara siempre sera el modulo;

        if(modulo == 0 || modulo == 1 || modulo == 5 || modulo == 6){ // Son los numero que nultiplicados por ellos mismos, siempre conservan su ultima cifra, nunca cambia
            cout << modulo << endl; 
        }
        else{
            nestor(modulo, exponente);
        }

    }


    return 0;
}