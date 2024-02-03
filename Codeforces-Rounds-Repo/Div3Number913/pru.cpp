#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'


int main(){

    int casos; cin >> casos;

    while (casos--){

        vector<char> arr(2);
        for(int i  = 0; i < 2; i++) cin >> arr[i];

        int dig = arr[1]-'0';
        char data = arr[0];

        vector<char> letras {'a','b','c','d','e','f','g','h'};

        for(int i = 0; i < 8; i++){
            if(data != letras[i]) cout << letras[i] << dig << ENDL;
        }
        for(int i = 1; i <= 8; i++){
            if(dig != i) cout << data << i << ENDL;
        }

        
    }
    
    
    

    return 0;
}