#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void pelea(vector<int>& aliados, vector<int>&enemigos, int& fuerza){

    sort(aliados.begin(), aliados.end(), greater<int>());
    sort(enemigos.begin(), enemigos.end(), greater<int>());

    int a = 0;
    int e = 0;
 
    while(a < aliados.size() && e < enemigos.size() ){

    
        if(aliados[a] > enemigos[e]){

            fuerza += aliados[a];
            a++;
            e++;

        }

       else{

            e++;

        }
    }

}
 

int main (){

    int tropas;
    cin >> tropas;

    vector <int> aliados (tropas);
    vector <int> enemigos (tropas);

    for (int i=0; i < tropas; i++){

        cin >> aliados[i];

    }

     for (int i=0; i < tropas; i++){

        cin >> enemigos[i];

    }
    int fuerza = 0;

    pelea(aliados,enemigos, fuerza);

    cout << fuerza;

        return 0;
}