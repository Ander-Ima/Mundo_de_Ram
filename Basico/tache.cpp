#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;


int main (){
  int n;

  cin >> n;

  for (int i = 0; i <= ((n-1)/2); i++){
    for (int j = 0; j < i; ++j){

      cout << " ";
    }
    cout << "@";

    for (int k = 0; k < n - 2 -2*i; ++k ){

      cout << " ";

    }
    if (i == (n-1)/2){
      break;
    }
    cout <<"@" << endl;
  }
  cout << endl;



  for (int i = (n-1)/2 -1; i >= 0; i--){
    for (int j = i; j > 0; --j){
      cout << " ";
    }
    cout << "@";

    for (int k = 0; k < n - 2 -2*i; ++k ){
      cout << " ";
    }
    cout <<"@" << endl;
  }

  return 0;

}