#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        ll tam, divi; cin >> tam >> divi;
        vector<ll> arr(tam);
        vector<bool> data(tam , true);

        for(int i = 0; i < tam; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        int point = tam -1;
        ll count = 0;
        ll max = 0;
        ll f;

        for(int i = tam - 1; i >= 0; i--){
            if(data[i]){
                max = 0;

                for(int m = i-1; m >= 0; m--){

                    if(data[m]){
                        ll tempo = (arr[i] + arr[m])/divi;
                        if(tempo >= max){ 
                            max = tempo;
                            f = m;
                        }
                        if(tempo < max || m == 0){
                            count += max;
                            data[i] = false;
                            data[f] = false;
                            break;

                        }
                    }

                    if(m == 0){
                        count += max;
                        data[i] = false;
                        data[f] = false;
                        break;
                    }

                    
                }

            }
        }
        
        cout << count << ENDL;
        /* code */
    }
    

    return 0;
}