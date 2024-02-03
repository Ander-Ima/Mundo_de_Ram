#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main() {

    int casos; cin >> casos;

    while (casos--){
        
        int tam; cin >> tam;
        vector<char> arr(tam);

        for(int i = 0; i < tam; i++) cin >> arr[i];

        int key  = 0;

        for(int i = 0; i < tam-2; i++){

            for(int m = i+2; m < tam-1; m++){
                if(arr[i] == arr[m] && arr[i+1] == arr[m+1]){
                    key = 1;
                    break;
                }
            }

            if(key == 1){
                cout << "YES" << ENDL;
                break;
            }
        }
        if(key == 0) cout << "NO" << ENDL;
    }

    return 0;
}