#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<int> arr(tam);

        int first, second = -1, key  = 1, data = 0;
        int conta = 0, contb = 0;

        for(int i = 0; i < tam; i++) {
            cin >> arr[i];

            if(i == 0) first = arr[i];
            if(data == 0 && arr[i] != first){
                second = arr[i];
                data = 1;
            }

            if(data == 1){
                if(arr[i] != first && arr[i] != second){
                    key  = 0;
                }
            }
            if(arr[i] == first) conta++;
            if(arr[i] == second) contb++;

        }
        if(second == -1) cout << "Yes" << ENDL;

        else{

            int lav = abs(conta - contb);
            if(key && lav <= 1) cout << "Yes" << ENDL;
            else cout << "NO" << ENDL;

        }

    }
    return 0;
}