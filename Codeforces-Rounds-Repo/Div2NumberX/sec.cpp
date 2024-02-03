#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos; 

    while (casos--){

        int tam; cin >> tam;


        vector<char> arr(tam);
        ll mov = tam * (tam + 1) / 2;
        ll cont = 0;
        ll ans = 0;
        vector<int> val(30,0);
        set<char> repe;

        for(int i = 0; i < tam; i++){
            cin >> arr[i];
            int temp = arr[i] - 'a' + 1;
            if (val[temp] == 0){
                val[temp] = 1;
            }
            else{
                cont++;
            }
        }

        for(auto& dato: arr){
            repe.insert(dato);
            ans += repe.size();
        }

        cout << ans << ENDL;
    }   
    

    return 0;
}