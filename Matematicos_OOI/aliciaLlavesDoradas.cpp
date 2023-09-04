#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void posicion(int& llaves, vector<int>& solucion, vector<int>& puerta){

    for(int i = 0; i < llaves; i++){

        int key = solucion[i];

        int search = lower_bound(puerta.begin(), puerta.end(), key) - puerta.begin();

        if(puerta[search] == key){

            cout << search+1 << endl;

        }
        else{

            cout << "0" << endl;

        }

    }


}


int main(){

    int chapas;
    int llaves;

    cin >> chapas;
    vector<int> puerta(chapas);

    for(int i = 0; i < chapas; i++){

        cin >> puerta[i];

    }

    cin >> llaves;
    vector <int> solucion(llaves);
    
    for(int i = 0; i < llaves; i++){

        cin >>  solucion[i];

    }

    posicion(llaves, solucion, puerta);
    return 0;
}