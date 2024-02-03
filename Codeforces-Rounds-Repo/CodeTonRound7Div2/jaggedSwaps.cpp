#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

        }

        if(is_sorted(arr.begin(),arr.end())) cout << "YES" << ENDL;
        else{
            if(arr[0] != 1) cout << "NO" << ENDL;
            else cout << "YES" << ENDL;
        }
    }

    return 0;
}
