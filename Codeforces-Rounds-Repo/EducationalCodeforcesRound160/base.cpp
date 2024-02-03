#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main(){

    int casos; cin >> casos;


    while (casos--){
        
        string ab;
        cin >> ab;

        int pos = -1;
        for (int i = 1; i < ab.size(); ++i) {
            if (ab[i] != '0') {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            cout << "-1\n"; 
        } else {

            int a = stoi(ab.substr(0, pos));
            int b = stoi(ab.substr(pos));

            if(b > a) cout << a << " " << b << ENDL;
            else cout << -1 << ENDL;
        }
        
    }
    


    return 0;
}