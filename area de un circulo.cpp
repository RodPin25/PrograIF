#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

//Prototipo de funcion
double calcularArea(double radio);


int main(int argc, char *argv[]) {
	cout<<"Hola usuario"<<endl;
	Sleep(1000);
	cout<<"Ingrese el radio del circulo al que le desea encontrar el area"<<endl;
	double radio;
	cin>>radio;
	double resultado=calcularArea(radio);
	cout<<"El area del circulo es de: "<<resultado<<endl;
	Sleep(1000);
	cout<<"Nos vemos usuario";
	return 0;
}
double calcularArea(double radio) {
	double pi=3.1416;
	double resultado=pow(radio,2)*pi;
	return resultado;
}

