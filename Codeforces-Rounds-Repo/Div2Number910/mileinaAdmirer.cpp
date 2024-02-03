// 11:50
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;


    while (casos--){

        int tam; cin >> tam;
        vector<long long int> arr(tam);

        for(int i  = 0; i < tam; i++) cin >> arr[i];

        ll next = INT_MAX;
        ll opera = 0;

        for(int i = tam - 1; i >= 0; i--){

            if(arr[i] <= next) next = arr[i];
            else{
                ll pilas = (arr[i] + next - 1)/ next;
                opera += pilas - 1;
                next = arr[i]/pilas;
                
            }
        }
        cout << opera << ENDL;
    }
    return 0;
}

/*
    1 9 3

    1 3 6 3
    1 3 3 3 3   ----> 2

    1 9 3

    1 3 6 3
    1 3 2 4 3
    1 1 2 2 4 3 ---> 3


    7
    1 4 4 3 5 7 6

    1 2 2 4 3 5 7 6
    1 2 2 2 2 3 5 7 6
    1 1 1 2 2 2 3 5 7 6
    1 1 1 1 1 2 2 3 5 7 6
    1 1 1 1 1 1 1 2 3 5 7 6
    1 1 1 1 1 1 1 1 1 3 5 7 6
    1 1 1 1 1 1 1 1 1 1 2 5 7 6
    1 1 1 1 1 1 1 1 1 1 2 2 3 7 6
    1 1 1 1 1 1 1 1 1 1 2 2 3 3 4 7 -->

    1 4 4 3 5 7 6
    1 4 4 3 5 3 4 6;
    1 4 4 3 2 3 3 4 6
    1 4 4 1 2 3 3 4 6


*/
