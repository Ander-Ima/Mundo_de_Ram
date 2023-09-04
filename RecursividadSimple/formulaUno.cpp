#include <iostream>
using namespace std;

long long  f(long long  int n){

    if (n <= 5 ){
        return 1;
    }

    else {
        long long int resultado  = f(n-2)*5;
        return resultado;
    }
}

int main (){

    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
    
}