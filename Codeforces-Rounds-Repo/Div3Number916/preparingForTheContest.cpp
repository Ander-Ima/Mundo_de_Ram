#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main(){

    int casos; cin >> casos; 
    
    while (casos--){

        int tam, emociones; 
        cin >> tam >> emociones;

        vector<int> arr;
        int cont = 0;
        int p;

        for(int i = tam - emociones; i <= tam; i++) arr.push_back(i);
        for(int i = tam - emociones - 1; i >= 1; i--) arr.push_back(i);

        for(auto & dato: arr) cout << dato << ' ';
        cout << ENDL;
        

    }

    return 0;
}