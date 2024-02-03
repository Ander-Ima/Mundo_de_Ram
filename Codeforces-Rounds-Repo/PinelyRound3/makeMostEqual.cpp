#include <bits/stdc++.h>
using namespace std;

#define ENDL '\n'
#define ll long long


int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        int key = -1;
        int par = -1;

        int dos = 0;

        int allPars = 1;
        int allInpars = 1;


        vector<ll> arr(tam);


        for(int i = 0; i < tam; i++){
            cin >> arr[i];
            

            if(par == 1 && arr[i] % 2 == 1){
                dos = 1;
            }
            if(par == 0 && arr[i] % 2 == 0){
                dos = 1;
            }


            if(i == 0){
                if(arr[i] % 2 == 0) par = 1;
                else par = 0;
            }


            
        }

        if(dos) cout << 2 << ENDL;
        else{

            sort(arr.begin(), arr.end());

        
            long long diff = arr[tam - 1] - arr[0];

            ll k = 3;
            int act = 0;
            
            while (k <= diff) {
                int f = 1;
                int s = 1;
                ll mod = -1;
                ll mad = -1;
                
                for(int i = 0; i < tam; i++){

                    if(f == 0 && s == 1 && arr[i] % k != mod){
                        mad = arr[i] % k;
                        s = 0;
                    }

                    if(f == 1){
                        mod = arr[i] % k;
                        f = 0;
                    }

                    if(f == 0 && s == 0){
                        if(arr[i] % k != mod && arr[i] % k != mad) break;
                    }

                    if(i +1 == tam && mad != -1){
                        cout << k << endl;
                        act = 1;
                        break;
                    }

                }
                if(act) break;
                k++;
            }

            if(act == 0) cout << k << ENDL;
    
        }
    }

    return 0;
}

