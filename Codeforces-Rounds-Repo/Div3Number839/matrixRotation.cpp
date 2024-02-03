#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        vector<int> up(2), dowm(2);

        for(int i = 0; i < 2; i++) cin >> up[i];
        for(int i = 0; i < 2; i++) cin >> dowm[i];

        int key = 1;
        int opera = 0;

        while (key && opera < 4){

            if(up[0] < up[1] && dowm[0] < dowm[1] && up[0] < dowm [0] && up[1] < dowm [1]){
                key = 0;
                cout << "YES" << ENDL;
                break;

            }
            else{
                int provi = up[1];
                up[1] = up[0];
                up[0] = dowm[0];
                dowm[0] = dowm[1];
                dowm[1] = provi;
                opera++;
            }

        }
        
        if(key) cout << "NO" << ENDL;

    }
    


    return 0;
}