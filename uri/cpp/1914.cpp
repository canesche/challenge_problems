#include <iostream>

using namespace std;

int main(){
	unsigned long int qt, v1, v2;
	string n1, n2, esc1, esc2;
	
	cin >> qt;
	for(int i = 0; i < qt; i++){
		cin >> n1 >> esc1 >> n2 >> esc2;
		cin >> v1 >> v2;
		if((v1+v2)%2 == 0){
			if (esc1 == "PAR")
				cout << n1 << endl;
			else
				cout << n2 << endl;
		} else {
			if (esc1 == "IMPAR")
				cout << n1 << endl;
			else
				cout << n2 << endl;
		}
	}
}
