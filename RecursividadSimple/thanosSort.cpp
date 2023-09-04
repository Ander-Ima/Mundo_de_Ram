#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ordenamiento(int n, vector<int>& arr) {
    if (is_sorted(arr.begin(), arr.end())) {
        return n;
    } else {
        int mitad = n/2;
        vector<int> arr1(arr.begin() + mitad, arr.end());
        if (is_sorted(arr1.begin(), arr1.end())) {
            return arr1.size(); 
        } else {
            return ordenamiento(mitad, arr1); 
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = ordenamiento(n, arr);
    cout << res << endl;
    return 0;
}