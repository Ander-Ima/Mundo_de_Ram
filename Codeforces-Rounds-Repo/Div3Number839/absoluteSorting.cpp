#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;


    while (casos--){

        ll tam; cin >> tam;
        vector<ll> arr(tam);
        vector<ll> iteraciones;

        ll up, down, data = 1;


        for(int i = 0; i < tam; i++){
            cin >> arr[i];

            if(i > 0 && data && arr[i] < arr[i-1]){
                up = arr[i-1];
                down = arr[i];
                data = 0;
                iteraciones.push_back(i-1);
                iteraciones.push_back(i);
            }
            if(data == 0 && arr[i] < arr[i-1]){
                iteraciones.push_back(i-1);
                iteraciones.push_back(i);
            }
        }

        if(data) cout << 0 << ENDL;
        else{

            ll pila = iteraciones.size();

            for(int i = down+1; i <= up; i++){

                ll tempo = i;
                ll key = 1;

                vector<ll> rem(pila);

                for(int m = 1; m < pila; m+=2){

                    rem[m] = abs(iteraciones[m] - tempo);
                    rem[m] = abs(iteraciones[m-1] - tempo);

                    if(key && rem[m] < rem[m-1]){
                        key = 0;
                        m = tam;
                    }
                }

                if(key){
                    cout << tempo << ENDL;
                    break;
                }

                if(i == up) cout << -1 << ENDL;

            }

        }
    }
    


    return 0;
}