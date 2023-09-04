#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void lugar (vector<string>& carros, string& key, int& cupo){

    int lugar = find(carros.begin(), carros.end(), key) - carros.begin();

    if(lugar < carros.size() && carros[lugar] == key){

        int place = cupo - lugar;

        cout << place << endl;

    }   
    else{

        cout << "No existe el auto" << endl;

    }

}


int main(){

    int cupo;
    cin >> cupo;
    vector<string> carros(cupo);

    for (int i = 0; i < cupo; i++)
    {
        cin >> carros[i];
    }
    
    string key;
    cin >> key;

    lugar(carros, key, cupo);

    return 0;
}