#include <bits/stdc++.h>
using namespace std;

#define ENDL '\n'
#define ll long long

int main(){

    ll casos; cin >> casos;

    while (casos--){

        ll tam; cin >> tam;

        if((tam % 2) != 0){
            for(int i = 0; i < tam; i ++) cout << 7 << ' ';
            cout << ENDL;
        }
        else{
             if(tam% 4 != 0){
                int n = tam / 2 - 1;

                for(int i = 0; i < n; i++) cout << 4 << ' ';
                for(int i = 0; i < n; i++) cout << 12 << ' ';
                cout << 4 <<' ' << 12 << ENDL;
             }
             else{
                cout << 1 << ' ' << 3 << ' ';
                for(int i = 2; i < tam; i++) cout << 2 << ' ';
                cout << ENDL;

             }
            }
        }
    
    return 0;
}