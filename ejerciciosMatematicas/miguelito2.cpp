#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int u64;

// Problema de exponenciacion modular, resolver a^n (mod m).
// para resolverlo se usara un "algoritmo/formula" llamado exponenciacion modular rapida

u64 resultado(u64 base, u64 exponent, u64 modulo) {

    // Anotaciones en la libreta
    // 1) Escribir el exponente n, en binario, asi cada ves que aparesca el uno se ejecutara la operacion (x(a) mod(m))
    // 2) Se calcula iterativamente a mod (m), a^2 mod(m), a^4 mod (m).... a^i mod(m)
    // 3) A su vez se diminuye el exponente, ya que se esta convirtiendo en binario(se divide entre 2, si el resultado es impar significaria que es un 1 en binario, por lo que se realiza lo diche en el 1er paso)
    // 4) El codigo se repite hasta que se haya convertido en total n al binario(n < 0) 

    u64 result = 1;     // Se declara como 1, ya que es neutro multiplicativo
    base %= modulo;
    while (exponent > 0) {
        if (exponent % 2 == 1) {  // Se checa si no hay un 1 en binario
            result = (result * base) % modulo; // Si hay un 1, se toma la posicion i anteriormente iterada y se multiplica por el resultado, ya que x*y*z mod (m) = r*z mod (m)  donde r = x*y mod (m) 
        }

        base = (base * base) % modulo; //Se determina el modulo de la posicion i de iterar.
        exponent /= 2;
    }
    return result;
}

int main() {
    std::ios::sync_with_stdio(false);

    u64 base, exponente, modulo;
    cin >> base >> exponente >> modulo;

    cout << resultado(base, exponente, modulo) << endl;

    return 0;
}