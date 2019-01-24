#include <iostream>

using namespace std;

string convert(int a){
	if(a == 10) return "A";
	else if(a == 11) return "B";
	else if(a == 12) return "C";
	else if(a == 13) return "D";
	else if(a == 14) return "E";
	else if(a == 15) return "F";
	else return to_string(a);
}

int main(){
	long long int v, v1;
	string s = "";
	
	cin >> v;
	
	while(v > 16){
		v1 = v % 16;
		v = v / 16;
		s += convert(v1);
	} 
	s = convert(v)+s;
	cout << s << endl;
}
