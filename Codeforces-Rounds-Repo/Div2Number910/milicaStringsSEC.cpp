#include <bits/stdc++.h>
using namespace std;

int main(){

    int casos;
    cin >> casos;

    while (casos--){

        int tam, k;

        cin >> tam >> k;

        vector<char> arr(tam);

        int cont = 0;

        for(int i = 0; i < tam; i++){
            cin >> arr[i];
            if(arr[i] == 'B') cont ++;
        }

        if(k == cont) cout << 0 << '\n';

        else if(k > cont){
            for(int i = 0; i < tam; i++){
                if(arr[i] == 'A') cont ++;
                if(cont  == k){ 
                    cout << 1 << '\n' <<i + 1 << "  B\n";
                    break;
                }
            }
        }

        else if(k < cont){
            for(int i = 0; i < tam; i++){
                if(arr[i] == 'B') cont --;
                if(cont  == k) {
                    cout << 1 << '\n' << i + 1 << "  A\n";
                    break;
                }
            }
        }

    }
    

    return 0;
}