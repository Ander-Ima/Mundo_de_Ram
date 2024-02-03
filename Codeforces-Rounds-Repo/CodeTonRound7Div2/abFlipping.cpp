#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main() {

    int casos; cin >> casos;

    while (casos--){

        ll tam; cin >> tam;
        vector<char> arr(tam);

        ll ans = 0;
        ll pos = 0;
        ll data = 0;

        for(int i = 0; i < tam; i++){

            cin >> arr[i];

            if(arr[i] == 'A'){
                data++;
            }
            else{
                if(arr[i] == 'B' && data > 0){
                    ans += (i - pos);
                    pos = i;
                }
                else if(data==0){
                    pos = i+1;
                }
            }

        }
        cout << ans << ENDL;
    }
    


    return 0;
}