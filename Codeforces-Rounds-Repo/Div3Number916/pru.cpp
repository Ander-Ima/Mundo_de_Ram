#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

 vector<int> arr;
        int cont = 0;
        int p;


int main(){

    int casos; cin >> casos;

    while (casos--){

        int resueltos = 0;

        int dur; cin >> dur;
        string arr; cin >> arr;
        
        unordered_map<char, int> mapeado;

        for(auto &dato : arr){
            mapeado[dato]++;
        }


        for(auto &dato: mapeado){
            if(dato.second >= dato.first - 'A' +1){
                resueltos++;
            }
        }

        cout << resueltos << ENDL;
        
    }
    


    return 0;
}