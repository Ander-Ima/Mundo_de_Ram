#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'



int main(){

    int casos; cin >> casos;

    while (casos--){

        int tam; cin >> tam;    

        vector<int> arr(tam);
        for(int i = 1; i <= tam; i++) arr[i-1] = i;

        int data = tam*2;
        int rest = 2;

        for(int i = 2; i <= tam; i+=2){
            cout << data << ' ' << i << ' ';
            data-=2;
        }
        cout << ENDL;

        data = (tam) + 1;

        for(int i = 1; i <= tam; i+=2){
            cout << i << ' ' << data <<' ';
            data+=2;
        }
        cout << ENDL;
    }
    
    return 0;

}
