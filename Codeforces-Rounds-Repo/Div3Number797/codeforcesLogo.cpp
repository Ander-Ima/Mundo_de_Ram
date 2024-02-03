#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        ll bloques; cin >> bloques;

        ll data = bloques/3;

        
        if(bloques%3 == 0){
            cout << data << ' ' << data+1 << ' ' << data - 1 << ENDL;
        }
        else if (bloques%3 == 1){
            cout << data << ' ' << data+2 << ' ' << data-1 << ENDL;
        }
        else if (bloques%3 == 2){
            cout << data+1 << ' ' << data+2 << ' ' << data-1 << ENDL;
        }

        
    }
    


    return 0;
}