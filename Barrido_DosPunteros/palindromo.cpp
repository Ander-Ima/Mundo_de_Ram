#include <iostream>
using namespace std;

void validacion(string & cadena){

    int izq = 0; int der = cadena.length() - 1; 

    while (der >= izq)
    {

        if(cadena[izq]== cadena[der]){

            izq++;
            der--;

        }
        else{

            break;

        }

    }

    if(der < izq){
        cout << "Cierto" << endl;
    }
    else{
        cout << "Falso" << endl;
    }

}




int main(){

    string cadena;

    cin >> cadena;

    validacion(cadena);

    return 0;
}