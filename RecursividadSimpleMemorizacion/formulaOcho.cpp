#include <iostream>
#include <vector>
using namespace std;

std::vector<long long> memoria(1, 100);

long long recursividad(long long x) {

    if (x < 4) {
        return 10;
    } 
    else if (x >= memoria.size()) {
        memoria.resize(x + 1, -1);
    }

    if (memoria[x] != -1) {
        return memoria[x];
    }

    long long resultado = recursividad(x - 2) + recursividad(x - 4) + 30;
    memoria[x] = resultado;
    return resultado;
}

int main() {

    long long x;
    cin >> x;
    
    cout << recursividad(x);

    return 0;
}