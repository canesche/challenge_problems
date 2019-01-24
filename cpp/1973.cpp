#include <iostream>
using namespace std;

int main(){
    long int n;
    cin >> n;
    long int v[n];
	long int t[n];

    long int i;

    for(i = 0; i < n; ++i) {
        cin >> v[i];
		t[i] = 0;
	}

	long int c = 0;
	long int aux;
	
    i = 0;
    while(true) {
        if(i < 0 || i >= n)
            break;
        else {
			aux = v[i];
			t[i] = 1;
			if (v[i] > 0) --v[i];
			(aux % 2 == 0) ? --i : ++i;
        }
    }

	long int sum = 0, sum2 = 0;
	for(i = 0; i < n; i++){
		sum += v[i];
		sum2 += t[i];
	}
	cout << sum2 << " " << sum << endl;
}
