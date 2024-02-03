#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        ll tam; cin >> tam;
        vector<ll> arr(tam);
        int key1 = 0, key2 = 0;
        
        for(ll i = 0; i < tam; i++){
            cin >> arr[i];
            if(arr[i] < 0) key1 ^= 1;
            if(arr[i] == 0) key2 = 1;

        }

        if(key2) cout << 0 << ENDL;
        else{
            if(key1) cout <<"0\n";
                else{
                    cout << 1 << ENDL;
                    cout << 1 <<' '<< 0 << ENDL;
                }
            }

        }
    

    return 0;
}