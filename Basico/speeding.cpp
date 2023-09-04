#include <iostream>
using namespace std;

int main(){

    int a;
    int mayor=0;
    cin >> a;

    int numeros[a];
    int denominador[a];

    for(int i= 0; i < a; i++){
     cin >> numeros[i] >> denominador[i];
    }

    float resultado[a];

    for (int i=0; i < a; i++){

        resultado[i] = (((denominador[i+1])-(denominador[i]))/((numeros[i+1])-(numeros[i])));

        if(resultado[i] > mayor){
            mayor = resultado[i];

        }
    }
    cout << mayor << endl;

    return 0;

}