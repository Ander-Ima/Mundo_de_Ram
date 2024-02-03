#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

vector<ll> criba;

void relleno(){

    ll data;

    for(int i = 0; i < 50; i++){

        data = pow(2,i);
        criba.push_back(data);
        
    }


}


ll busqueda(ll dato){

    ll dowm = 0, up = criba.size()-1;
    ll punt = up/2;

    ll tempo = criba[punt];

    while (dowm <= up){

        tempo = criba[punt];

        if(tempo == dato){
            return 0;
        }
        if(tempo > dato) up = punt-1;
        if(tempo < dato) dowm = punt+1;
        
        punt = (up+dowm)/2;

        if(dowm > up){

            if(criba[punt] < dato)punt++;

            ll regreso = criba[punt] - dato;
            return regreso;
        }
    }
    
    return 0;
}


int main(){
    
    relleno();
    
    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<int> arr(tam);

        for(int i = 0; i < tam; i++) cin >> arr[i];

        cout << tam << ENDL;

        for(int i = 0; i < tam; i++){
            cout << i +1 << ' ' << busqueda(arr[i]) << ENDL;

        }
        
    }
    



    return 0;
}