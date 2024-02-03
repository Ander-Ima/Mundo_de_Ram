#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    ll casos; cin >> casos;

    while (casos--){

            int number; cin >> number;

            int zeros = 1; 
            int data = number;
            int cant = 0;

            while (data > 9){
                data /= 10;
                zeros *= 10;
                cant += 9;
            }
            cant += (number/zeros); 

            cout << cant << ENDL;

    }
    return 0;
}