#include <bits/stdc++.h>
using namespace std;

#define ENDL '\n'
#define ll long long

int main(){

    int casos; cin >> casos;

    while (casos--){
        
        string arr; cin >> arr;

        int tam = arr.length();

        for(int i = 0; i < tam; i++) cout << arr[i];
        for (int i = tam - 1; i >= 0; i--) cout << arr[i];

        cout << ENDL;
        
    }

    return 0;
}