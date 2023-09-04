#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int u64;

// Se busca un numero de una sola cifra (Digito poderoso), que sea la suma de los digitos de un numero X concatenado N veces, si no se consigue a la primera suma
// se volvera a ejecutar el proceso hasta que la suma de los digitos sea de una sola cifra.
int resultado(u64& numero, u64& concatenaciones){

    u64 suma;
    u64 proceso;

    // El bucle while se ejecutara hasta que se tenga una suma de una sola cifra, que sera la base para multiplicar por el numero de veces que se concatenera.
    while(numero >= 10){

        suma = 0;
        proceso = numero;


        while(proceso > 0){

            suma += proceso % 10;  // Lo que hace el mmodulo es obtener la ultima cifra del numero y a su ves sumarla a el proximo numero.
            proceso = proceso/10;  // Hace que el numero "Proceso" cambie para asi poder agarrar la proxima cifra.

        }

        numero = suma;  // El nuevo numero va a ser el resultado de las sumas de los digitos anteriores.   
    }
        numero = numero* concatenaciones; // Se crea un nuevo numer, en base del antiguo obtenido y el numero de veces que se concatenera y se vuelve a repetir el proceso,
        // del bucle while hasta que se tenga un numero de una sola cifra (digito poderoso).   

        while(numero >= 10){

        suma = 0;
        proceso = numero;


        while(proceso > 0){

            suma += proceso % 10; 
            proceso = proceso/10;  
        }

        numero = suma;        

    }

    return numero; // Nota: No se puede concatenar el numero desde antes, ya que los limites del problema son muy grandes, asi que desbordaria la varible
    // por eso primero se obtiene cierta p[arte (base) y despues se multiplica por el numero de veces que se va a concatenar y se repite el proceso (Checar los mensajes de discordcon Santiago). 

}



int main(){

    std::ios::sync_with_stdio(false);

    int tamano;
    cin >> tamano;

    u64 numero;
    u64 concatenaciones;
   

    for(int i = 0; i < tamano; i ++){

        cin >> numero;
        cin >> concatenaciones;
        

        cout << resultado(numero, concatenaciones) << endl;

    }


    return 0;
}