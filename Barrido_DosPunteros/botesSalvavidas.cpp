#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int botes(vector<int>& pesos, int& maximo){

    int izq = 0, dere = pesos.size()-1, suma, cantidad = 0;


    while (dere >= izq){
        
        suma = pesos[izq] + pesos[dere];

        if(suma <= maximo){
            cantidad++;
            dere--;
            izq++;
        }
        else{
            dere--;
            cantidad++;
        }

    }

    return cantidad;
    

}


int main(){

    int maximo, pasajeros;
    cin >> maximo >> pasajeros;
    vector<int> pesos(pasajeros);

    for(int i = 0; i < pasajeros; i++){

        cin >> pesos[i];

    }

    sort(pesos.begin(), pesos.end());

    cout << botes(pesos, maximo) << endl; 

    return 0;
}