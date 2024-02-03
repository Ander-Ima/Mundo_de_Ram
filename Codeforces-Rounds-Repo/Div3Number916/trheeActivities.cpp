#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main() {
    int casos;
    cin >> casos;

    while (casos--) {
        int tam;
        cin >> tam;
        vector<ll> skking(tam), cinema(tam), games(tam);


        auto a = max_element(skking.begin(), skking.end());
        auto b = max_element(cinema.begin(), cinema.end());
        auto c = max_element(games.begin(), games.end());

        if(a !=b && a!= c && b != c){
            ll ans = *a +*b +*c;
        }else{
            
            ll max = min(*a, *b, *c)
            if(max == *a) 
        }
      
    }

    return 0;
}
