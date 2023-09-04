#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int u64;

// Se tiene una serie infinita ...123123123123... (racional), y dada una posicion N, determinar que numero se encuentra antes y despues P posiciones
void numeros(u64& saltos, u64& posicion){

    if(saltos != 0){

        if(saltos >= posicion){

            u64 atras = saltos - (posicion - 1); // Restamos el numero de posiciones que estan antes del primer uno.
            atras = atras % 3; // Se saca el modulo y se checa el residuo, ya que sera la base para saber que numero se encuentra P posiciones antes.
     

            if(atras == 0) cout << "1 "; // Si es 0, significa que es un divisor de 3, por lo tanto las posiciones siempre van a dar el 1
            if(atras == 1) cout << "3 "; // Un modulo 1 => un 3.
            if(atras == 2) cout << "2 "; // Un modulo 2 => un 2.

        }
        else{
            cout << posicion - saltos << " "; //  Debido que daria un numero negativo el hacer los proceos del modulo etc..
        }

        // Se obtiene el numero que esta P posiciones despues.
        u64 delante =  saltos - (3 - posicion);
        delante = delante % 3;

        if(delante == 0) cout << "3" << endl;
        else cout << delante << endl;

    }
    else{
        cout << posicion << " " << posicion << endl; // Si los saltos son 0, entonces el numero que esta antes y despues es el mismo.
    }
}

int main(){

    std::ios::sync_with_stdio(false);

    u64 posicion, saltos;
    cin >> posicion >> saltos;

    if(posicion == 1 && saltos == 1){ // Ya que esto provocaba error al sacar su modulo y veces qeu se repite (daba negativo), se saca como un caso aparte.
        
        cout << "3" << " 2" << endl;    

    }
    else{
        numeros(saltos, posicion);
    }

    

    return 0;
}