#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

//sort(arra.begin(), arra.end());
//sort(arrb.begin(), arrb.end());
int main(){

    int casos; cin >> casos;

    while (casos--){

        int experriencia = 0, tem = 0, maxim = 0;

        int levels, maximo; cin >> levels >> maximo;
        vector<ll> arra(levels), arrb(levels);

        for(int i = 0; i < levels; i++) cin >> arra[i];
        for(int i = 0; i < levels; i++) cin >> arrb[i];

        for(int i = 0; i < levels; i++){

            if(maximo == i) break;

            else{

                experriencia += arra[i];
                int memo = arrb[i];
                maxim = max(maxim, memo);
                int esp = experriencia+ ((maximo- i) - 1)*maxim;
                tem = max(esp, tem);

            }

        }
        experriencia = tem;

        cout << experriencia << ENDL;
        
    }
    






    return 0;
}