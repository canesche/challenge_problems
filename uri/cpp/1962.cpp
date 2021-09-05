#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int long long n, t, v;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> t;
		v = 2015-t;
		if(v > 0){
			cout << abs(v) << " D.C." << endl;
		} else {
			cout << abs(v)+1 << " A.C." << endl;
		}
	}
	
	return 0;
}
