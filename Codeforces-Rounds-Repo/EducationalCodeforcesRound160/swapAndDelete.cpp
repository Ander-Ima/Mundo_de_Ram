#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        string arr; cin >> arr;

        int one = 0; int zeros = 0;
        string teta = "";

        for(int i = 0; i < arr.length(); i++){
            if(arr[i] == '0') zeros++;
            else one++;
        }

        for(int i = 0; i < arr.length(); i++){
            if(arr[i] == '0' && one < 1) break;
            if(arr[i] == '1' && zeros < 1) break;
            if(arr[i] == '0' && one > 0){
                teta+='1';
                one--;
            } 
            else if(arr[i] == '1' && zeros > 0){
                teta+='0';
                zeros--;
            }
        }
        int uno = arr.length();
        int dos = teta.length();

        cout << abs(uno - dos) << ENDL;

        }

    return 0;
}