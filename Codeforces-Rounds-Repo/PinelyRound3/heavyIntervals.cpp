#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<ll> l(tam), r(tam), c(tam);
        vector<ll> segmentos, cargas;
        vector<pair<ll,ll>> keys;

        for(int i = 0; i < tam; i++) cin >> l[i];
        for(int i = 0; i < tam; i++) cin >> r[i];
        for(int i = 0; i < tam; i++) cin >> c[i];

        for(int i = 0; i < tam; i++){

            keys.push_back({l[i],0});
            keys.push_back({r[i], 1});
        }

        sort(keys.begin(), keys.end());


        for(auto dato : keys){
            if(dato.second == 0){
                cargas.push_back(dato.first);
            }
            if(dato.second == 1){
                segmentos.push_back(dato.first- cargas.back());
                cargas.pop_back();
            }
        }
            sort(segmentos.begin(), segmentos.end());
            sort(c.begin(), c.end(), greater<int>());

            ll max = 0;

            for(int i = 0; i < tam; i++) max +=(segmentos[i]* c[i]);

            cout << max << ENDL;

        /* code */
    }
    

    return 0;
}