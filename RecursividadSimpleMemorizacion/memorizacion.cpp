#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int u64;
const int MAX = 100;

u64 contadorLlamadas = 0;
u64 memo[MAX][MAX][MAX] = {0};

u64 obtenerMenor(u64 a, u64 b, u64 c) {
    u64 menor = min(a, b);
    menor = min(menor, c);
    // min(a, min(b, c));
    return menor;
}

u64 f(u64 a, u64 b, u64 c) {
    // Si no he visitado este estado antes.
    if (memo[a][b][c] == 0) {
        contadorLlamadas++;
    }
    else {
        // Ya lo visite una vez, entonces ya tengo su valor guardado.
        return memo[a][b][c];
    }

    u64 resultado = 0;
    u64 menor = obtenerMenor(a, b, c);
    if (menor <= 3) {
        resultado = a + 2 * b + 3 * c;
    }
    else if (a + b + c == 100) {
        resultado = 0;
    }
    else {
        resultado = f(a - 1, b - 1, c -1) + f(a, b - 3, c - 3) + f(a/2, b, c);
    }
    // Guardar el resultado en la memoria
    memo[a][b][c] = resultado;

    return resultado;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << f(a, b, c) << " " << contadorLlamadas << "\n";

    return 0;
}