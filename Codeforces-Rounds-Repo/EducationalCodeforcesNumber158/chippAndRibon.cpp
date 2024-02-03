#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<ll> arr(tam);
        for(int i = 0; i < tam; i++) cin >> arr[i];

        ll ans = 0;
        ll previus = 0;

        for(int i = 0; i < tam; i++){
            if(arr[i] > previus) ans += arr[i] - previus;
            previus = arr[i];
        }

        cout << ans - 1 << ENDL;
    }
    


    return 0;
}