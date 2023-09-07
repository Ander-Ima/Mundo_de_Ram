#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int u64;

// Se te dará K, y en las siguientes lineas K(i) un numero
//  Verificar si k(i) es primo o no


vector <u64> validos {2,3}; // Inicialisa un vector con los 2 primeros numeros primos
u64 raiz;

bool verificacion(u64& puntero){ // Verifica si X numero es primo

    raiz = sqrt(puntero);

    for(u64& dato : validos){ // Se itera hasta la raiz, si se encuentra un divisor no es primo, de lo contrario es primo y se agrega al vector de primos
        if((puntero % dato) == 0) return 0;
        if(dato > raiz) return 1;
    }

    return 1;

}

void criba(u64& mayor){ // Busca los numeros primos hasta el maximo k(i)

    u64 puntero = 5; // Numero primo siguiente

    while (puntero <= mayor)
    {
        if(verificacion(puntero)) validos.push_back(puntero); // Agrega el valor al vector de primos

        puntero +=2; // Avanza de 2 en 2 para no usar valores pares
    }


}



int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    u64 casos, mayor = 0;
    cin >> casos;
    vector <u64> numeros(casos);

    for(u64 i = 0; i < casos; i++){
        cin >> numeros[i];

        if(numeros[i] > mayor) mayor = numeros[i]; // Calcula el mayor numero de k(i), para realizar la criba hasta ese limite
    }

    if(mayor >=5 ){ // Se tienen ya los 2 primeros primos, por lo que no es nesesario si mayor < 5
        criba(mayor);
    }

    for(u64& dato : numeros){
        if(binary_search(validos.begin(), validos.end(), dato)) cout << "SI" << endl; // Busca k(i) y verifica si esta en el vector de primos
        else cout << "NO" << endl;
    }

     

    return 0;
}