#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

void solucion(){

    int a,b,c,d,e,f; 
    cin >> a >> b >> c >> d >> e >> f;
    vector<ll> dex = {-a,-a,a,a,b,b,-b,-b};
    vector<ll> dey = {-b,b,b,-b,a,-a,a,-a};
    set<pair<int,int>> data;
    int cont = 0;

    for(int i = 0; i < 8; i++){
        int intra = e + dex[i];
        int juan = f + dey[i];

        for(int m = 0; m < 8; m++){

            int usa = intra + dex[m];
            int vas = juan +dey[m];
            if(usa == c && vas == d){
                if(data.find({intra,juan}) != data.end())
                    continue;

                cont++;
                data.insert({intra,juan});
                
            } 


        }

    }

    cout << cont << ENDL;

}


int main() {
    int t;
    cin >> t;

    while (t--) {
        solucion();
    }

    return 0;
}
