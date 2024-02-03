#include <bits/stdc++.h>
using namespace std;

int minimumLength(int n, string s) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (result > 0 && s[i] == s[result - 1]) {
            // Remove the pair if the current character is equal to the last character in the result
            result--;
        } else {
            // Otherwise, add the current character to the result
            s[result] = s[i];
            result++;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, int> contador;

    
        for (char c : s) {
            if (isalpha(c)) {
                contador[c]++;
            }
        }

        vector <int> arr;
        for(auto& dato: contador){
            arr.push_back(dato.second);
        }
        int data = 1;
        for(int i = 0; i < arr.size(); ++i){

            while (arr[i] > 0 && data < arr.size()){
                if(arr[i] - arr[data] > 0){
                    arr[i] -= arr[data];
                    arr[data] = 0;
                    data++;
                }
                else{
                    arr[data] -= arr[i];
                    arr[i] = 0;
                    i = data;
                    data++;
                }
            }

            for(int i = 0; i < arr.size(); i++){
                if(arr[i] != 0){
                    cout << arr[i] << endl;
                    break;
                }
                if(i == arr.size()-1) cout << 0 << endl;
            }

        }
    }

    return 0;
}