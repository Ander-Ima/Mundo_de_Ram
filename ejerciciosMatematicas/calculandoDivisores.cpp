#include <bits/stdc++.h>
using namespace std;


// Dado un numero n, calcular los divisores naturales de ese numero y escribirlos de forma descendente
void divisores(int& numero){

    vector<int> conjunto;

    int raiz = sqrt(numero); // Se saca la raiz cuadrada del numero, ya que si no se tiene nbingun divisor hasta ese limite, da por sentado que es un numero primo y solo tendria 2 divisores (1 y n)
    int dado;

    for(int i = 2; i <= raiz; i++){

        if(numero % i == 0){
            dado = i;  
            conjunto.push_back(dado);
        }

    }

    if(conjunto.empty() && numero != 1){ // Verifica si es un numero primo o si n = 1
        cout << numero << endl << 1 << endl;
    }
    else if(numero == 1){
        cout << 1 << endl;
    }


    else{ //Calcula todos los divisores faltantes de n.

        for(int i = raiz+1; i <= numero/2; i++){

            if(numero % i == 0){
                dado = i;  
                conjunto.push_back(dado);
            }

        }

        // Se imprime los divisores de forma descendente
        cout << numero << endl;

        for(int i = conjunto.size()-1; i >= 0; i--){ 

            cout << conjunto[i] << endl;

        }

        cout << 1 << endl;

    }


}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int numero;
    cin >> numero;

    divisores(numero);


    return 0;
}