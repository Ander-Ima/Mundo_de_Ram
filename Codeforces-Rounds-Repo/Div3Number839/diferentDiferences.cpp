#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos; 

    while (casos--){
        
        int tam, maxi; cin >> tam >> maxi;

        int data = 1;
        int pros;
        vector<int> arr{1};
        int ant = 1;
        tam--;
        int key = 0;

        for(int i = 1; i < maxi; i++){
            int dif = i;
            tam--;
            int res = dif + ant;

            if((res + tam) <= maxi && tam > 0){
                arr.push_back(res);
                ant = res;
            }
            else{
                
                for(int m = maxi-tam; m <= maxi; m++){
                    arr.push_back(m);
                }
                key = 1;
                break;
            }

            if(key) break;

        }

        for(auto& dat : arr) cout << dat << ' ';
        cout << ENDL;

    }
    

    return 0;
}