#include <bits/stdc++.h>
using namespace std;

#define ENDL '\n'
#define ll long long


int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<int> primero(tam), segundo(tam);
        int key = -1;
        int llave = -1;
        int ans = 1;
        int sec = 1;

        for(int i = 0; i < tam; i++){
            cin >> primero[i];
            cin >> segundo[i];

            if(key == -1 && primero[i] != 0){
                if(primero[i] > 0) key = 1;
                else key = 0;
            }

            if(key == 1 && primero[i] < 0) ans = 0;
            if(key == 0 && primero[i] > 0) ans = 0;


             if(llave == -1 && segundo[i] != 0){
                if(segundo[i] > 0) llave = 1;
                else llave = 0;
            }

            if(llave == 1 && segundo[i] < 0) sec = 0;
            if(llave == 0 && segundo[i] > 0) sec = 0;

        }

        if(ans == 0 && sec == 0) cout << "NO" << ENDL;
        else cout << "YES" << ENDL;
        
    }
    

    return 0;
}

