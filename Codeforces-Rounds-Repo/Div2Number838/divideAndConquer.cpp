#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'


int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;
        vector<ll> arr(tam);
        ll sum = 0;

        for(int i = 0; i < tam; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum % 2 == 0) cout << 0 << endl;
        else{
            int key = INT_MAX;   
            int data; 
            for(int i = 0; i < tam; i++){
                if(arr[i]%2 == 0)data = 0;
                else data = 1;
                int cam = data;
                int op = 0;

                while (cam == data){
                    arr[i]/=2;
                    op++;
                    if(arr[i]%2 == 0)cam = 0;
                    else cam = 1;
                }
                if(op < key) key = op;    
            }
            cout << key << ENDL;
        }
    }
    



    return 0;
}