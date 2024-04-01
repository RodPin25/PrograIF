#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos numeros"<<endl;
	cout<<"Primer numero: ";
	int num1,num2;
	cin>>num1;
	cout<<"El segundo numero: ";
	cin>>num2;
	
	if(num1>num2)
		cout<<num1<<" es mayor que "<<num2<<endl;
	else
		cout<<num2<<" es mayor que "<<num1<<endl;
	return 0;
}

