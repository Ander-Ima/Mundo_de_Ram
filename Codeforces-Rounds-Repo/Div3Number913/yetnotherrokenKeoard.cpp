#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'


int main(){

    int casos; cin >> casos;

    while (casos--){
        string palabra; cin >> palabra;
        vector<char> arr(palabra.begin(), palabra.end());

        int min = 0;
        int mayus = 0;

        vector<char> ans;


        for(int i = palabra.size()-1; i >= 0; i--){
            if(arr[i] == 'b') min++;
            else if(arr[i] == 'B') mayus++;

            else if(islower(arr[i])){
                if(min > 0) min--;
                else{
                    ans.push_back(arr[i]);
                }
            }

            else if(isupper(arr[i])){
                if(mayus > 0) mayus--;
                else{
                    ans.push_back(arr[i]);
                }
            }
        }

        for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i];
        cout << ENDL;
    }


    return 0;
}