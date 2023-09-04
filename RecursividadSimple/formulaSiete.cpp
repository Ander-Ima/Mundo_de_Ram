#include <iostream>
using namespace std;

int siete(int n,int m){

    if (n < 5){
        return 20;
    }
    else if(n==5){
        return siete(n-2,m-2)*2;
    }
    else if(n>5){
        return siete(n-1,m-1)+2;
    }
}

int main (){

    int n, m;
    cin >> n >> m;

    cout << siete(n, m)<< endl;

    return 0;
    
}