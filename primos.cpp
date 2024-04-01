#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Hola usuario"<<endl;
	Sleep(1000);
	cout<<"Ingrese un numero"<<endl;
	int numero;
	cin>>numero;
	
	int contador=1, contadorDivisores=0;
	while(contador<=numero) {
		if(numero%contador==0) {
			contadorDivisores++;
		}
		contador++;
	}
	if(contadorDivisores<=2) {
		cout<<numero<<" es primo";
	} else {
		cout<<numero<<" No es primo";
	}
	return 0;
}

