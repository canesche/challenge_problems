#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int p, n;
	bool ganhou = true;
	
	cin >> p >> n;
	
	int v[n];
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	for(int i = 0; i < n-1; i++){
		if(abs(v[i]-v[i+1]) > p){
			cout << "GAME OVER" << endl;
			ganhou = false;
			break;
		}
	}
	
	if(ganhou) cout << "YOU WIN" << endl;
	return 0;
}
