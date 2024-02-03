#include <bits/stdc++.h>
using namespace std;

int main(){

    int casos;
    cin >> casos;
    
    while(casos--){

        int tam;
        cin >> tam;

        vector<int> arr(tam);
        vector<int> pref(tam,0);

        int key = 0;

        for(int i = 0; i < tam; i++) cin >> arr[i];
            
        int max = 0;
        int sum = 0;
        int act = 0; 

        for(int i = 0; i < tam; i++){
            
            if(arr[i] > 0 && act == 0){
                sum += arr[i];

                if(sum > max) max = sum;

                act = 1;
            }

            if(abs(arr[i])%2 == 0) key = 0;
            else key = 1;

            if(act == 1 && key == 0 && i < tam - 1 && abs(arr[i+1])%2 == 1) {
                sum  += arr[i+1];
                if(sum > max) max = sum;
            }

            else if(act == 1 && key == 1 && i < tam - 1 && abs(arr[i+1])%2 == 0) {
                sum  += arr[i+1];
                if(sum > max) max = sum;
            }

            else{
                act = 0;
                sum  = 0;
            }

            if(act  == 1 && sum < 0){
                sum = 0;
                act = 0;
            }

        }
        if(max == 0) max = sum;
        if(max == 0) max = *max_element(arr.begin(), arr.end());

        cout << max << endl;
    }

    return 0;
}