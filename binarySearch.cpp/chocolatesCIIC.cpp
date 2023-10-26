#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int u64;

vector <int> chocolates;
u64 dias, limite = 0;

u64 dieta;

bool validacion(u64& busqueda){

    for(int i = 0; i < dias-1; i++){

        if((chocolates[i] - busqueda) < 0) return 0;
        chocolates[i+1] += chocolates[i] - busqueda;

    }

    if((chocolates[dias-1] - busqueda) < 0 ) return 0;

    return 1;
}


u64 comer(u64& minimo, u64& maximo, u64& busqueda){

    while (minimo < maximo)
    {
 

        if(validacion(busqueda) && busqueda > limite) {
            limite = busqueda;

            minimo = ((minimo + maximo) / 2) +1;

            busqueda = (minimo + maximo) / 2;

            return (minimo, maximo, busqueda);

        }
        else{

            
            maximo = ((minimo + maximo) / 2) -1;

            busqueda = (minimo + maximo) / 2;

            return (minimo, maximo, busqueda);

        }
    }

    return limite;


}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin >> dias;

    chocolates.resize(dias);

    u64 minimo = 1000000, maximo = 0;

    for(int i = 0; i < dias; i++){
    
        cin >> chocolates[i];
        if(chocolates[i] > maximo) maximo = chocolates[i];
        if(chocolates[i] < minimo) minimo = chocolates[i];
    
    }

    cout << comer(minimo, maximo, maximo) << endl;

    return 0;
}