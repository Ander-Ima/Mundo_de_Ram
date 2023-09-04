#include <iostream>
#include <vector>
using namespace std;


int main(){

    int operaciones;
    cin >> operaciones;
    int tacos;
    int clientes = 0;
    int vendidos = 0;
    vector<int> ordenes;
    vector<int> numeros;
    int actual;


    for(int i = 0; i < operaciones; i++){

        cin >> actual;

    if(actual == 1){
        cin >> tacos;
        ordenes.push_back(tacos);
        clientes ++;

    }

    if(actual == 2){

        if(!ordenes.empty()){

            vendidos += ordenes[0];
            ordenes.erase(ordenes.begin()+0);
            clientes --;

            }
    }

        if(actual == 3){

            cout << clientes << endl;

        }

        if(actual == 4){

            cout << vendidos << endl;

        }


}


    return 0;
}