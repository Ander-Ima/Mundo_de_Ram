#include <bits/stdc++.h>
using namespace std;

int main() {

    string curp, nombre, fecha_nac, clave_entidad;

    getline(cin, curp);
    getline(cin, nombre);
    getline(cin, fecha_nac);
    getline(cin, clave_entidad);

    regex curp_regex("[A-Z]{4}[0-9]{6}[H,M][A-Z]{2}[B,C,D,F,G,H,J,K,L,M,N,Ñ,P,Q,R,S,T,V,W,X,Y,Z]{3}[0-9,A-Z][0-9]");
    if (!regex_match(curp, curp_regex)) {
        cout << "invalido" << endl;
    return 0;
    }

    for(int i=0; i<2; i++){

        if(fecha_nac[8+i]!=curp[4+i]){
            cout << "invalido" << endl;
            return 0;
        }
    }

    for(int i=0; i<2; i++){

        if(clave_entidad[i]!=curp[11+i]){
            cout << "invalido" << endl;
            return 0;
        }
    }
    cout << "valido" << endl;
    return 0;

}