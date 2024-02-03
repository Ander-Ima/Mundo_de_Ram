#include <bits/stdc++.h>
using namespace std;

#define ENDL '\n'
#define ll long long

int main() {
    int casos;
    cin >> casos;

    while (casos--) {
        int tam;
        cin >> tam;

        vector<ll> arr(tam);

        for (int i = 0; i < tam; i++) {
            cin >> arr[i];
        }

        // Encuentra el máximo común divisor (MCD) de todos los números en el array
        ll gcd = arr[0];
        for (int i = 1; i < tam; i++) {
            gcd = __gcd(gcd, arr[i]);
        }

        cout << gcd << ENDL;
    }

    return 0;
}
