#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        ll tam; cin >> tam;
        vector<ll> arr(tam);
        
        ll contm = 0, conta=0, menor = INT_MAX, mayor = 0; 

        for(int i = 0; i < tam; i++){

            cin >> arr[i];

            if(arr[i] > mayor){
                mayor = arr[i];
                conta= 0;
            }
            if(arr[i] < menor){
                menor = arr[i];
                contm = 0;
            }
            if(arr[i] == mayor) conta++;
            if(arr[i] == menor) contm++;
            
        }
        ll res;

        if(mayor == menor) res = (tam-1)*(tam);
        else res = (conta*contm)*2;

        cout << res << ENDL;

    }
    

    return 0;
}