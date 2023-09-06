#include <bits/stdc++.h>
using namespace std;

// Calcular la cantidad de divisores de m numeros n

// Nota: Usamos la terna pitagorica

void divisores(int& puntero){

    if(puntero == 2 || puntero == 3){  // Verifica que no sea 2 y 3, ya que pueden provocar un error.

        cout << 2 << endl;

    }


    // Fctorizamos por primos, (Anoaciones en libreta)
    else{

        // Calculamos la riaz (Sera el limite de la factorizacion de primos, debido a que si no se encuentra ningun divisor en ese punto, significa que ese numero es primo)
        int raiz = sqrt(puntero), divi = 2, cantidad = 0, total = 1;

        while (puntero != 1 && divi <= raiz)
        {
            while ( puntero % divi == 0)
            {
                puntero /= divi; 
                cantidad ++; // Se aumenta el exponente ya que el primo es factor de n

            }

            total *= (cantidad+1); // Se calcula la cantidad de divisores hasta el momento
            cantidad = 0;
            divi ++;        

        }

        if(puntero > 1) cout << total*2 << endl;  // Se imprime la cantidad de divisores y se multiplica por 2 en caso de no ser primo (Si lo fuera el puntero siempre se hubiera mantenido en 1, ya qe no se itera con divi =1 o con divi = n)
        else cout << total << endl; // Si es 1, su unico divisor seria el mismo
    }
    

}

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int casos, puntero;
    cin >> casos;
    vector<int> numeros(casos);

    while(casos--){
       cin >> puntero;
       divisores(puntero);
    }



}
