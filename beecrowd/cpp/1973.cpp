#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int v[n];
	long long int t[n];

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
		t[i] = 0;
	}

	long long int c = 0;
	long long int aux;
	
    int i = 0;
    while(true) {
        if(i < 0 || i >= n)
            break;
        
		aux = v[i];
		t[i] = 1;
		if (v[i] > 0) --v[i];
		(aux % 2 == 0) ? --i : ++i;
    }

	long long int sum = 0, sum2 = 0;
	for(int i = 0; i < n; i++){
		sum += v[i];
		sum2 += t[i];
	}
	cout << sum2 << " " << sum << endl;
}
