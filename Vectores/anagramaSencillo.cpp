#include <iostream>
#include <string.h>
 #include <stdlib.h>
    
using namespace std;

char palabra[1000],palabra2[1000], aux, aux2;
int x,y;

void ordenar(){
    cin >> palabra;
    aux = palabra[1000];
    x = strlen(palabra);

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if(palabra[i]< palabra[j]){
                aux = palabra[i];
                palabra[i] = palabra [j];
                palabra[j] = aux;
            }
        }
    }
}
void ordenar2(){
    cin >> palabra2;
    aux2 = palabra2[1000];
    y = strlen(palabra2);

    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            if(palabra2[i]< palabra2[j]){
                aux2 = palabra2[i];
                palabra2[i] = palabra2 [j];
                palabra2[j] = aux2;
            }
        }
    }

}
    int main (){

    ordenar();
    ordenar2();
    int s = strlen(palabra);
    int f = strlen(palabra2);

    if(s != f){
        cout << "Las cadenas tienen longitud diferente. Operacion Cancelada!";
        exit (0);
    }

    if(strcmp(palabra, palabra2)==0){
        cout << "SI es un ANAGRAMA!";
    }
    else{
        cout << "NO es un Anagrama!";
    }
        return 0;
    }