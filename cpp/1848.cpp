#include <iostream>

using namespace std;

int main(){
	
	string s;
	int count = 0;
	int soma = 0;
	
	while(count != 3){
		getline(cin, s);
		//cout << s << endl;
		if(s == "caw caw"){
			count++;
			cout << soma << endl;
			soma = 0;
		} else {
			if(s == "---") soma += 0;
			else if(s == "--*") soma += 1;
			else if(s == "-*-") soma += 2;
			else if(s == "-**") soma += 3;
			else if(s == "*--") soma += 4;
			else if(s == "*-*") soma += 5;
			else if(s == "**-") soma += 6; 
			else if(s == "***") soma += 7; 
		}	
	}
	
	return 0;
}
