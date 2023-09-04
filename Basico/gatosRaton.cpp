#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x;
    int y;
    int z;

    cin >> x >> y >>z;

    float a = abs(z-x);

    float b = abs(z-y);

    float c = a-b;

    if (c > 0){
        
        cout << "gato B" << endl;
    }
    
    else{

        if (c < 0){

        cout << "gato A" << endl;
    }
    else {
        cout << "raton C" << endl;

    }
    }
    return 0;

}