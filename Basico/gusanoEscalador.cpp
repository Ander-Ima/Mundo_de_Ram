#include <iostream>
using namespace std;


int main (){

    int x, y, z;
    int i=0;
    int distancia = 0;
    cin >> x >> y >> z;



    while (distancia < x){

        distancia = distancia + y;
        i++;

        if(distancia >= x){
            cout << i;
        }
        if (distancia < x){
            distancia = distancia - z;
        i++;
        }

    }

    return 0;
}