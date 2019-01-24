#include <iostream>

using namespace std;

int main(){
	int n, i = 0;
	
	cin >> n;
	
	int v[n];
	
	while(i < n){
		cin >> v[i]; 
		i++;
	}
	
	int menor = 0;
	for(int i = 0; i < n; i++){
		if(v[i] < v[menor]){
			menor = i;
		}
	}
	
	cout << menor+1 << endl;
	
	return 0;
}
