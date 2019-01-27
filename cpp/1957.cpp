#include <iostream>

using namespace std;

string convert(long long int a){
	if(a == 10) return "A";
	else if(a == 11) return "B";
	else if(a == 12) return "C";
	else if(a == 13) return "D";
	else if(a == 14) return "E";
	else if(a == 15) return "F";
	else return to_string(a);
}

int main(){
	unsigned long long int v, v1;
	string s = "";
	
	cin >> v;
	
	while(v >= 16){
		s = convert(v % 16) + s;
		v = v / 16;
	} 
	if (s != " ")
		s = convert(v)+s;
	else
		s = convert(v);
	
	cout << s << endl;
}
