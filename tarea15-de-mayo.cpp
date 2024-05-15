#include <iostream>
#include <cstdlib>
using namespace std;

void menu();
void revez();
void copy(int arrayToCopy[]);
void convertPos(int arrayToConvert[]);
void getDecimals();

int main(int argc, char *argv[]) {
	menu();
	getDecimals();
	return 0;
}

const int a1=10;
void menu(){
	cout<<"Hola usuario"<<endl;
	revez();
}
void revez(){
	int numeros[a1];
	for(int i=a1-1;i>=0;i--){
		cout<<"Ingrese un numero: ";
		cin>>numeros[i];
	}
	for(int c: numeros){
		cout<<"El array contiene a: "<<c<<endl;
	}
	cout<<"Ahora se copiara el array"<<endl;
	system("pause");
	system("cls");
	copy(numeros);
	system("pause");
	system("cls");
	convertPos(numeros);
}
void copy(int arrayToCopy[]){
	int copied[a1];
	for(int i=0;i<a1;i++){
		copied[i]=arrayToCopy[i];
	}
	for(int c:copied){
		cout<<"Casilla copiada: "<<c<<endl;
	}
}
void convertPos(int arrayToConvert[]){
	for(int i = 0; i < a1; ++i) {
		if(arrayToConvert[i] < 0) {
			arrayToConvert[i] = -arrayToConvert[i];
		}
	}
	for(int i = 0; i < a1; ++i) {
		cout << "Convertido: " << arrayToConvert[i] << std::endl;
	}
}
void getDecimals(){
	const int a2=5;
	double decimals[a2];
	double numeros[a2];
	double ints[a2];
	for(int i=0;i<a2;i++){
		cout<<"Ingrese un numero decimal: ";
		cin>>numeros[i];
	}
	for(int d=0;d<a2;d++){
		int entero=numeros[d];
		double decimales=numeros[d]-entero;
		decimals[d]=decimales;
		ints[d]=entero;
	}
	for(int c=0;c<a2;c++){
		cout<<"el numero entero es: "<<ints[c]<<" y el numero decimal es: "<<decimals[c]<<endl;
	}
}
