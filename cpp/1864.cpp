#include <iostream>

using namespace std;

int main(){
	
	//LIFE IS NOT A PROBLEM TO BE SOLVED
	
	string text[] = {"L","I","F","E"," ","I","S"," ","N","O","T"," ","A",
					 " ","P","R","O","B","L","E","M"," ","T","O"," ","B",
					 "E"," ","S","O","L","V","E","D"};
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << text[i];
	}
	cout << endl;
	
	return 0;
}
