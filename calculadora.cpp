#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos numeros"<<endl;
	double num1,num2;
	cin>>num1;
	cin>>num2;
	cout<<"Seleccione que operacion desea realizar (+,-,*,/)"<<endl;
	char seleccion;
	cin>>seleccion;
	
	double resultado;
	switch(seleccion) {
	case '+':
		resultado=num1+num2;
		break;
	case '-':
		resultado=num1-num2;
		break;
	case '*':
		resultado=num1*num2;
		break;
	case '/':
		resultado=num1/num2;
		break;
	default:
		cout<<"No ingreso una operacion valida"<<endl;
	}
	
	cout<<resultado;
	return 0;
}

