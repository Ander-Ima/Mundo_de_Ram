#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int u64;

u64 filas, columnas;

// Dado una matriz de N filas y M columnas, se numera de forma ascendente empezando desde el 1 hasta N*M, depues se rota 90 grados y se vuelve a numerar, con esa rotacion
// se escogen X numeros y se tiene que decir que numero era despues de rotar la matriz pero antes de cambiar la numeracion.
u64 nuevo(u64& pastel, u64& total){

    u64 fp, cp, entregado;

    //Se checa primero si el pastel no es multiplo del tamano de las columnas, asi se evitan ciertos errores.
    if((pastel % columnas) != 0){ 

        fp = (pastel / columnas) + 1; // Se saca la fila actual de la matriz rotada y numerada.

    }

    else {

        fp = (pastel / columnas); // Si es multiplo del tamano de las columnas, se saca el numero de veces que puede ser divisible y ese es su fila actual del pastel.
        
    }

    cp = pastel - ((fp-1)*columnas);  // Se saca la columna actual del pastel de la matriz rotada y numerada

    entregado = (total+ fp)-(filas*(cp-1)); // Con operaciones matematicas se calcula el numero que era antes, haciendo uso de la fila y columna actual del pastel.
    
    return entregado;
}


int main (){

    std::ios::sync_with_stdio(false);

    u64 numero;

    cin >> columnas >> filas; // En el problema se piden primero las filas y despues las columnas, pero ya que se rota las columnas pasan a ser las filas y las filas las columnas.
    cin >> numero;

    u64 pastel;
    u64 total = (columnas * filas) - filas; // Se obtiene el numero mas grande contenido en la matriz, y se le resta el numero de filas, ya que hay se empezara la numeracion (antigua posicion 1).

    for(u64 i = 0; i < numero; i++){
        
        cin >> pastel;
        // Se pide el pastel y se manda a llamar la funcion. 
        cout << nuevo(pastel, total) << endl;

    }

    return 0;
}