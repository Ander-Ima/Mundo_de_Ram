#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){

    double potencia;
    cin >> potencia;
    double potenciado = pow(2.0, potencia);
    cout << fixed << setprecision(0) << potenciado;
    return 0;

}