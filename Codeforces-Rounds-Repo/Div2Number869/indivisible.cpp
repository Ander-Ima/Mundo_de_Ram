#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main(){

    int casos; cin >> casos; 

    while (casos--){

        int tam; cin >> tam;
        
        if((tam % 2) != 0 && tam != 1){
            cout << -1 << ENDL;
        }
        else{
            if(tam == 1) cout << 1 << ENDL;
            else{
                int data = 2;
                for(int i = 1; i <= tam; i+=2){
                    cout << data << ' ' << i << ' ';
                    data += 2;
                }
                cout << ENDL;
            }
        }
    }
    


    return 0;
}