#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ENDL '\n'

int tam, preguntas;
vector<ll> arr;

int busqueda(int& down, int& up){

    int sala = up - down + 1;
    int danger = 0;
    for(int i = down - 1; i < up; i++){

        if(i < up - 1 && arr[i] >= arr[i+1]){
            danger ++;
            if(danger == 2){
                danger = 1;
                sala--;
            }
        }
        else{
            danger = 0;
        }

    }

    return sala;


}



int main(){

    cin >> tam >> preguntas;


    arr.resize(tam);

    for(int i = 0; i < tam; i++) cin >> arr[i];   

    for(int i = 0; i < preguntas; i++){
        int down, up; cin >> down >> up;
        cout << busqueda(down, up) << ENDL;
    }

    return 0;
}