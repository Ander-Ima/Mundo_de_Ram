#include <iostream>
using namespace std;

int siete(int n){

    if (n <= 20){
        return 1;
    }

    return siete(n-5)+5+n;
    
}

int main (){

    int n;
    cin >> n;

    cout << siete(n)<< endl;

    return 0;
}