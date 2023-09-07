#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int u64;

// Determinar si m numeros n son primos

void validacion(u64& primo){

    u64 raiz = sqrt(primo);

    for(u64 i = 2; i <= raiz; i++){ // Si no se encuentra ningun divisor hasta la raiz, significa que es primo

        if((primo % i) == 0){
            cout << "No es primo" << endl;
            return;
        }

    }
    if(primo != 1) cout << "Es primo" << endl; // 1 es un numero primo, ya que solo es divisible entre el mismo
    else cout << "No es primo" << endl;
}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    u64 casos, primo;
    cin >> casos;

    while (casos--)
    {
        cin >> primo;
        validacion(primo);
    }
       

    return 0;
}