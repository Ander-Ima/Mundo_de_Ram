#include <iostream>
#include <vector>
using namespace std;


void torre(int& cantidad, vector <int>& bloques ){
    
    int g=0;
    int tamano = cantidad;

    for (int i = 1; i < cantidad; i++){
        
        int a = i;

         if(bloques[a] != bloques[g]){

                if(bloques[a-1] == 0){
                g++;
                bloques[g] = bloques[a];
                bloques[a] = 0;
                }
                else{
                    g++;
                }

            }
        
        
        else{

            while(bloques[a] == bloques[g]){

                if(g >= 1){
                    bloques[g] = (bloques[a])*2;
                    bloques[a] = 0;
                    a = g;
                    g--;
                    tamano--;
                }
                else{

                    bloques[g] = (bloques[a])*2;
                    bloques[a] = 0;
                    tamano --;     

                }
            }

            if(bloques[a] != 0 ){

                g++;

            }

        }


    }

    cout << tamano << endl;

    for (int i = tamano-1; i >= 0; i--){

        cout << bloques[i] << endl;

    }


}


int main(){

    int cantidad;
    cin >> cantidad;

    vector <int> bloques (cantidad);

    for (int i = 0; i < cantidad; i++){
        
        cin >> bloques[i];

    }

    torre(cantidad, bloques);


    return 0;
}