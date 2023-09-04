#include <iostream>
using namespace std;

int main (){   

    int x,i,y,h;
    cin >> x;
    int numeros[x];

    for (i=0; i<x; i++){
        cin >> numeros [i];
    }

    for (i=0; i<x-1; ++i){
        for (y=0; y<x-1; ++y){
            if (numeros[y] > numeros[y+1]){
                h = numeros[y];
                numeros[y] = numeros[y+1];
                numeros[y+1] = h;
            }
        }
    }
    cout << numeros[0] + numeros[x-1]<< endl;
    return 0;

}