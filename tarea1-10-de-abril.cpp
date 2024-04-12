#include <iostream>
#include <string>
using namespace std;

string unirStrings(string txt1,string txt2);

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos palabras o frases por favor"<<endl;
	string txt1,txt2;
	getline(cin, txt1);
	getline(cin, txt2);
	
	cout<<unirStrings(txt1,txt2)<<endl;
	return 0;
}
string unirStrings(string txt1,string txt2){
	return txt1+", "+txt2;
}
