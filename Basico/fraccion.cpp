#include <iostream>

using namespace std;

int main(){

    int x;
    int y;



    cin >> x >> y;

    int z = x % y;

    if (z == 0){

        int a = x/y;

        cout << a << endl;

    }



    else {

        float b = x/y;

        if(b > 0){

            int c = x-((b*y));
            cout << b << " " << c << "/" << y << endl;

        }
        else{

            int c = x-((b*y));
            cout << c << "/" << y << endl;

        }

    }
    return 0;
}