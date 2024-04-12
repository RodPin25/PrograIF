#include <iostream>
using namespace std;

double sumNumeros(double n1, double n2, double n3) {
	return n1+n2+n3;
}

int main(int argc, char *argv[]) {
	cout<<"Ingrese tres numeros con decimales por favor"<<endl;
	double n1,n2,n3;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cout<<"La suma de los tres numeros es: "<<sumNumeros(n1,n2,n3)<<endl;
	return 0;
}

