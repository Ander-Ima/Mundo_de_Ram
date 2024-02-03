#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;
    

    while (casos --){
        
        int unos, dos, tres; cin >> unos >> dos >> tres;

        bool for_one, for_two, for_three;

        if((dos+tres) % 2 == 0) for_one = 1;
        else for_one = 0;

        if((unos+tres) % 2 == 0) for_two = 1;
        else for_two = 0;

        if((dos+unos) % 2 == 0) for_three = 1;
        else for_three = 0;

        cout << for_one << ' ' << for_two << ' ' << for_three << ENDL;
        
    }



    return 0;
}