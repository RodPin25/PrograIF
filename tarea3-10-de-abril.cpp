#include <iostream>
#include <cstdlib>

using namespace std;

int num;

string divisores() {
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	string finalTxt;
	for(int i=1;i<=num;i++) {
		if(num%i==0) {
			if (!finalTxt.empty()) {
				finalTxt += ", ";
			}
			finalTxt += to_string(i);
			if(i==num)
				finalTxt+=".";
		}
	}
	return finalTxt;
}
int fibonacci(int numero) {
	if(numero<=1)
		return numero;
	else
		return fibonacci(numero-1)+fibonacci(numero-2);
}
int factorial(int numero) {
	if (numero == 1)
		return 1;
	else
		return numero * factorial(numero - 1);
}

string fn;
void menu() {
	system("cls");
	cout<<"Hola usuario, seleccione una opcion"<<endl;
	cout<<"1. Multiplos de un numero"<<endl;
	cout<<"2. Calcular el factorial de un numero"<<endl;
	cout<<"3. Calcular la serie fibonacci"<<endl;
	int selec;
	cin>>selec;
	switch(selec) {
	case 1:
		fn=divisores();
		cout<<"Los divisores son: "<<fn<<endl;
		break;
	case 2:
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		cout<<"El factorial es: "<<factorial(num)<<endl;
		break;
	case 3:
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		cout<<"El fibonacci es: "<<fibonacci(num)<<endl;
		break;
	default:
		cout<<"Seleccione una opcion valida"<<endl;
		menu();
	}
}

int main(int argc, char *argv[]) {
	menu();
	return 0;
}

