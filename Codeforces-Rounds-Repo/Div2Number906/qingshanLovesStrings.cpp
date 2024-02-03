#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main(){

    int casos; cin >> casos;

    while (casos--){

        int fis, seco; cin >> fis >> seco;
        vector<char> arr(fis), arr2(seco); 

        int data_one = 1;
        int data_sec = 1;

        for(int i = 0; i < fis; i++){
            cin >> arr[i];
            if(i > 0 && arr[i] == arr[i-1]) data_one = 0;
        }


        for(int i = 0; i < seco; i++){
            cin >> arr2[i];
            if(i > 0 && arr2[i] == arr2[i-1]) data_sec = 0;
        }
        
        if(data_one) cout << "Yes" << ENDL;
        else{
            
            if(data_sec == 0) cout << "No" << ENDL;
            else{
                int down = arr2[0], up = arr2.back();
                int key = 1;
                for(int i = 0; i < fis; i++){

                    if(i > 0 && arr[i] == arr[i-1]){
                        if(arr[i-1] == down || arr[i] == up){
                            cout << "No" << ENDL;
                            key = 0;
                            break;
                        }
                    }

                }
                if(key) cout << "Yes" << ENDL;
            }
        }
        
    }
    
    return 0;
}