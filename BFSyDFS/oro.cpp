#include <bits/stdc++.h>
using namespace std;


// Dado una lista de N numeros(rocas), encontrar la suma mas chica que sea mayor o igual al numero requerido.

int rocas, requerido, sobrante, mina, c;
vector <int> oro;

// Memoria de valores
vector <vector<int>> memoria;


int dfs(int posicion, int suma){

    // Si la cantidad de oro acumulada hasta el momento es igual a lo requerido se devuelve 0, ya que es lo sobrante
    if(suma == requerido){

        sobrante = 0;
        
        return sobrante;

    }

    // Si la cantidad de oro es mayor de lo requerido, se devuelve el exceso de oro
    if(suma > requerido){
        

        mina = suma - requerido;

        // Esto se utiliza para que de primeras el sobrante no tome un valor aleatorio
        if(c<1){

            sobrante = mina;
            c++;
        }
        
        return mina;

    }

    // Si se sobrepasa el limite de vector
    if(posicion >= rocas){

        return 0;

    }

    // Cambiar el valor del sobrante en dado caso de uno menor
    if(mina < sobrante && c == 1){

        sobrante = mina;

    }   

    // Verificar la memoria para saber si no ya se tiene ese caso
    if(memoria[posicion][suma] != -1){

        return memoria [posicion][suma];

    }

    dfs(posicion + 1, suma + oro[posicion]);
    dfs(posicion + 1, suma);
    
    // Asignar valor a la memoria
    memoria [posicion][suma] = sobrante;

    return sobrante;


}


int main(){

    std::ios::sync_with_stdio(false);

    // Se pide la cantidad de rocas que se tiene y el oro requerido
    cin >> rocas >> requerido;

    int posicion;

    // Ahora se declara la cantidad de oro en cada roca
    for(int i = 0; i < rocas; i++){

        cin >> posicion;
        oro.push_back(posicion);

    }

    memoria.assign(rocas+1, vector<int>(requerido+1, -1));

    cout << dfs(0,0) << endl;

    return 0;
}