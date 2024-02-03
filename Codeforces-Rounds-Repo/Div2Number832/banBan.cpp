#include <bits/stdc++.h>
using namespace std;


#define ENDL '\n'
#define ll long long

int main(){

    int casos; cin >> casos;

    while (casos--){

        int perm; cin >> perm;
        
        if(perm == 1){
            cout << 1 << ENDL;
            cout << 1 << ' ' << 2 << ENDL;
        }
        else{
            cout << (perm + 2 - 1)/2 << ENDL;

            for(int i = 1; i < (perm*3)/2; i+=3){
                cout << i << ' ' << (perm*3)-i+1 << ENDL;
            }
            if((perm % 2) != 0){
                cout << (perm*3)/2  <<' '<< ((perm*3)/2) +2 << ENDL;

            }

        }

    }
    



    return 0;
}