#include <bits/stdc++.h>
using namespace std;

    int tam, objetivo;
    vector<int> numeros;

    //Se declara la memoria para la memorizacion de estados (No se si sirva en este caso Xd)
    vector <vector<int>> memoria;


// Implementacion de DFS para encontrar el numero de combinaciones de N numeros para lograr un numero dado
int dfs(int posicion, int suma){


    if(suma == objetivo){
        return 1;
        //Encontramos una solucion
    }

    if(suma > objetivo || posicion >= tam){
        return 0;
        //Este estado no encontro solucion
    }

     // Se usa la recursion con memorizacion para ahorrar tiempo. NOTA (Siempre se pone antes del regreso general)
    if(memoria[posicion][suma] != -1 ){

        return memoria[posicion][suma];
    }


    //Explorar las probabilidades

    int contador = 0;

    // Agrego la suma actual
    contador += dfs(posicion+1, suma + numeros[posicion]);
    
    // No agrega el resultado de la suma
    contador += dfs(posicion+1, suma);

    // El valor de el contador se actualiza en cada nodo ya terminado
    memoria[posicion][suma] = contador;

    return contador;
}   

int main(){
    
    std::ios::sync_with_stdio(false);

    cin >> tam;


    for(int i = 0; i < tam; i++) {

        int x ;
        cin >> x;
        numeros.push_back(x);
        
    }

    cin >> objetivo;

    
    memoria.assign(tam + 1, vector<int>(objetivo + 1, -1));

    cout << dfs(0,0) << endl;

    return 0;
}