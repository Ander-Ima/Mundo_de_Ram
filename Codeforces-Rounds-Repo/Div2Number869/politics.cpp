#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int miembros, discusiones; cin >> miembros >> discusiones;
        int tam = miembros*discusiones;

        vector<char> arr(tam);

        for(int i = 0; i < discusiones; i++) cin >> arr[i];

        int cs = 0, key = 1;
        int maxi = miembros;

        for(int i = discusiones; i < tam; i++){
            cin >> arr[i];

            if(key && arr[i] != arr[cs]){
                maxi--;
                key = 0;
            }

            cs++;

            if(cs == discusiones){
                key = 1;
                cs = 0;
            }

        }

        cout << maxi << ENDL;
    }
    

    return 0;
}