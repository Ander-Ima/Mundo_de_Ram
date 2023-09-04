#include <iostream>
#include <regex>
#include <stack>
#include <cstdlib>



using namespace std;

void verificacion(string& primero){

    int tamano = primero.size();

    regex primero_regex("[abcd()]*");

    if(regex_match(primero,primero_regex)){

        int tamano = primero.size();
        stack<char> pila;

        for(int i=0; i < tamano; i++){

            if(primero[i] == '('){

                pila.push('(');

            }

            if(primero[i] == ')'){

                if(pila.size() > 0){

                    pila.pop();

                }
                else{

                    cout << "0" << endl;
                    exit(0);

                }
                

            }

        }

        if (pila.size() == 0){

            cout << "1" << endl;

        }   

        else{

            cout << "0" << endl;
            exit(0);

        }
        
        
    }

    else{

        cout << "0" << endl;
        exit(0);

    }




}



int main (){

    string primero;

    cin >> primero;

    verificacion(primero);

    

    return 0;
}