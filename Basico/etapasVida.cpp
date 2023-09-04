#include <iostream>
#include<stdlib.h>
using namespace std;


int main(){

    int e;

    cin >> e;

    if (e<=3){

        cout << "BEBE" << endl;
        exit (0);

    }

    if (e<=14){

        cout << "NINO" << endl;
        exit (0);

    }

    if (e<=18){

        cout << "JOVEN" << endl;
        exit (0);

    }

    if (e<=65){

        cout << "ADULTO" << endl;
        exit (0);

    }


    if (e >65){

        cout << "ADULTO 3RA" << endl;
        exit (0);
        
    }

    return 0;
}