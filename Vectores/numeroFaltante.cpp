#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int x;
    cin >> x;
    int z = x-1;
    int numeros[z];
    int reales[x];

    for (int i=0; i<z; i++){
        cin >> numeros [i];
    }

    for (int i=0; i<x; i++){
        reales[i] = i+1; 
    }

    int h;

    for (int i=0; i<z; i++){
        for (int y=0; y<z; y++){
            if (numeros[y] > numeros[y+1]){
                h = numeros[y];
                numeros[y] = numeros[y+1];
                numeros[y+1] = h;
            }
        }
    }


    for (int i = 0; i < x; i++){

        if (numeros[i] != reales[i]){
            cout << reales[i];
            exit (0);
            } 
    }
    return 0;



}