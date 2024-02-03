#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ENDL '\n'
 
int main(){
 
    int casos; cin >> casos;
 
    while (casos--){
 
        int tam, maximo; cin >> tam >> maximo;
        vector<ll> arr(tam);
 
        int data = 0;
        int key = 1;
 
        for(int i  = 0; i < tam; i++){
            cin >> arr[i];
            if( maximo == 1 && i > 0 && arr[i] < arr[i-1]){
                key  = 0;
            }
        }
 
        if(is_sorted(arr.begin(), arr.end()))  cout << "YES" << ENDL;
        else{
            if(key)cout << "YES" << ENDL;
            else cout << "NO" << ENDL;
        }
 
    }
 
    return 0;
}