#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ENDL '\n'
 
int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector <vector<int>> arr(tam, vector<int> (tam));
        vector<vector<int>> prueba(tam, vector<int> (tam));

        vector<int> ans;
        int data;
        for(int i = 0; i < tam; i++){
            data = -1;

            for(int m = 0; m < tam; m++){
                cin >> arr[i][m];
            
                if(data == -1 && i != m){
                    data = arr[i][m];
                }
                else if(data != -1 && i != m){
                    data &= arr[i][m];
                }
            
            }
            if(data == -1) data = 0;
            ans.push_back(data);
        }

        for(int i = 0; i < tam; i++){
            for(int m = 0; m < tam; m++){
                if(m != i){
                    prueba[i][m] = ans[i] | ans[m];
                }
                else{
                    prueba[i][m] = 0;
                }
            }

        }

        int key = 1;

        for(int i = 0; i < tam; i++){
            for(int m = 0; m < tam; m++){
                if(prueba[i][m] != arr[i][m]){
                    cout << "NO" << ENDL;\
                    key = 0;
                    break;
                }
            }
            if(!key){
                break;
            }
        }


        if(key){
            cout << "YES" << ENDL;
            for(auto& dato : ans) {
                if(dato == -1) cout << 7 << ' ';
                else cout << dato << ' ';
                }
            cout << ENDL;
        }
        

    }
    return 0;
}