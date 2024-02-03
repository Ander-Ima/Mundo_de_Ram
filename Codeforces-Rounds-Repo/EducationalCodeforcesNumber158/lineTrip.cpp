#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int gas, km; cin >> gas >> km;
        vector<int> arr(gas);

        int distance = 0;

        for(int i = 0; i < gas; i++){
            cin >> arr[i];
            if(i > 0){
                int data =  arr[i] - arr[i-1];
                if(data > distance) distance = data;
            }
        }
        
        int fuck = arr[0];
        if(fuck > distance) distance = fuck;


        if(gas == 1){
            distance = arr[0]; 
        }
    
        int provisional = (km -  arr.back())*2;
        if(provisional > distance) distance = provisional;

        cout << distance << ENDL;

    }
    return 0;
}

