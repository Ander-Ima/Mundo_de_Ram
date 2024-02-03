#include <bits/stdc++.h>
using namespace std;


#define ENDL '\n'
#define ll long long


int main(){

    int casos; cin >> casos;

    while (casos -- ){
         
        ll tam; cin >> tam;
        vector<ll> arr(tam);

        ll sum1 = 0;
        ll sum2 = 0;


        for(int i = 0; i < tam; i++){
            cin >> arr[i];

            if(arr[i] < 0) sum2 += abs(arr[i]);
            else sum1 += arr[i];

        }

        ll rest = abs(sum1 - sum2);

        cout << rest << ENDL;

    }
    


    return 0;
}