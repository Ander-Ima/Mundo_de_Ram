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
        if(tam == 1) cout << 1 << ENDL;
        else{
            sort(arr.begin(), arr.end());
            
            ll data =  arr[1]-arr[0];
            
            for(int i = 0; i+1 < tam; i++)  data = gcd(arr[i+1]-arr[i], data);
            
            const ll mn = arr[0];

            for(int i = 0; i < tam; i++){
                arr[i]-= mn;
                arr[i]/=data;
            }

            ll mx = arr.back();
            ll pas = 0;

            for(auto x: arr) pas += mx - x;

            set<ll> le;

            for(auto x : arr) le.insert(x);
            
            for(int i = 0; i <= tam; i++){
                if(le.count(mx-i)){
                    continue;
                }
                pas+=i;
                break;
            }

            cout << pas << ENDL;
        }

        
    }
    

        return 0;
}