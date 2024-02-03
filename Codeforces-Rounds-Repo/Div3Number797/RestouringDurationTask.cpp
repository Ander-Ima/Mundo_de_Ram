
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ENDL '\n'

int main() {
	
	ll tam; cin >> tam;
	vector <ll> arr(tam);

	ll minimo = LLONG_MIN;
	ll max = LLONG_MAX;

	for(int i = 0; i < tam; i++){
		cin >> arr[i];
		if(arr[i] < max && arr[i] >= 0){
			max = arr[i];
		}
		if(arr[i] > minimo && arr[i] <= 0){
			minimo = arr[i];
		}
	}

	cout << min(abs(max), abs(minimo)) << ENDL;


	return 0;	
}
