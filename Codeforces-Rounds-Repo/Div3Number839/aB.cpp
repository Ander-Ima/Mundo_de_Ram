#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        vector<char> arr(3);
        for(int i = 0; i < 3; i++) cin >> arr[i];

        int rest = (arr[0]-'0')+(arr[2]-'0');
        cout << rest << ENDL;
    }
    


    return 0;
}