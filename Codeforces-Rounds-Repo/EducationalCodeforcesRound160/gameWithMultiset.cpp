#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

/*vector <int> freta(32,1);
int pas = 0;*/

int main(){

    vector<ll> caja(32,0);
    int consultas; cin >> consultas;

    while (consultas--){

        int tipoCons; cin >> tipoCons;
        if(tipoCons == 1){
            int second; cin >> second;
            caja[second]++;
        }
        else{
            int segunda; cin >> segunda;
            vector<ll> temporal = caja;
            int key = 1, bits = 0;
            while (bits < 30){
                if((segunda >> bits) & 1){
                    if(temporal[bits]) temporal[bits]--;
                    else key = 0;
                }
                temporal[bits+1] += temporal[bits]/ 2;
                bits++;
            }
            
            if(key) cout << "YES" << ENDL;
            else cout << "NO" << ENDL;
        }
    }

    return 0;
}