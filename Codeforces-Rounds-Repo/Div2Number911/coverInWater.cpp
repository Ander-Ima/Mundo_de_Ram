#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ENDL '\n'
 
int main(){
 
    int t; cin >> t;
 
    while (t--) {
        int tam;
        cin >> tam;
 
        vector<char> arr(tam);
        for(int i = 0; i < tam; i++) cin >> arr[i];
 
        int actions = 0;
        int key = 1;
 
        for (int i = 0; i < tam; ++i) {
            if (i < tam -2 && arr[i] == '.' && arr[i+1] =='.' && arr[i+2] == '.') {
                actions+=2;
                i+=2;
                key = 0;
                cout << 2 << ENDL;
                break;
            }
 
            else if(i < tam-1 && arr[i] == '.' && arr[i+1] == '.'){
                actions+=2;
                i+=1;
            }
            else if(arr[i]== '.'){
                actions++;
            }
        }
 
        if(key) cout << actions << endl;
    }
 
    return 0;
}