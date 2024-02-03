#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<char> arr(tam);
        int key = 0;
        int zeros = 0;
        int unos = 0;

        for(int i = 0; i < tam; i++){
            cin >> arr[i];
            if(arr[i] == '0') zeros++;
            else unos++;
        }

        if(zeros > unos){
            cout << "YES" << ENDL;
        }
        else

        {for(int i = 0; i < tam - 1; i++){
            if(arr[i] != arr[i+1]){
                key = 1;
                break;
            }
        }

        if(key) cout << "YES" << ENDL;
        else cout << "NO" << ENDL;
        }
    }
    



    return 0;
}