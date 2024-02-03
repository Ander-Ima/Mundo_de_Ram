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
        vector<ll> desor{arr.begin(), arr.end()};
        sort(arr.begin(),arr.end());

        vector<ll> iteraciones(tam);
        iteraciones[0] = arr[0];
        for(int i = 1; i < tam; i++){
            iteraciones[i] = iteraciones[i-1] + arr[i];
        }

        for(int i = 0; i < tam; i++){
            int key = 1;
            int cont = 0;
            auto data = lower_bound(arr.begin(),arr.end(), desor[i]);
            int caso = distance(arr.begin(), data);

            ll sum = iteraciones[caso];
            cont = caso;

            auto flower = lower_bound(arr.begin(),arr.end(), sum);


            while (flower != arr.end())
            {
                cont = distance(arr.begin(), flower);
                if(*flower != sum){
                    cont --; 
                    cout << cont << ENDL;
                    key = 0;
                    break;
                }
                sum = iteraciones[cont];
                flower = lower_bound(arr.begin(),arr.end(), sum);
                cont --;
            }            

            if(key) cout << cont << ENDL;
        }

    }

    return 0;
}