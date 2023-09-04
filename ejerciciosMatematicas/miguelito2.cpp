#include <bits/stdc++.h>
using  namespace std;

typedef unsigned long long int u64;

u64 base, exponenete, modulo;
vector<u64> residuos;

u64 respuesta(){

    u64 operacion = base % modulo; 

    residuos.push_back(operacion);
    u64 normal = residuos[0];

    operacion = pow(base, 2);
    operacion =  operacion % modulo;

    u64 contador = 3;


    while(operacion != normal){

        residuos.push_back(operacion);

        operacion = pow(base, contador);
        operacion =  operacion % modulo;

        contador++;

    }

    u64 posicion = exponenete % residuos.size();

    if(posicion == 0){

        return residuos.back();


    }

    else{

        return residuos[posicion-1];

    }
    
}


int main(){

    std:: ios::sync_with_stdio(false);

    cin >> base >> exponenete >> modulo;

    cout << respuesta() << endl;

    return 0;
}