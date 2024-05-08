#include <iostream>
#include <cstdlib>
using namespace std;

void arrayQuince(){
	int numeros[15];
	
	for(int i=0;i<sizeof(numeros)/sizeof(*numeros) ; i++){
		cout<<"Hola usuario, ingrese un numero: ";
		cin>>numeros[i];
	}
	for(int i=0;i<sizeof(numeros)/sizeof(*numeros); i++){
		cout<<"El numero en la casilla "<<i<<" es: "<<numeros[i]<<endl;
	}
}
int main(int argc, char *argv[]) {
	arrayQuince();
	system("pause");
	system("cls");
	const int l1=10;
	const int l2=3;
	const int l3=4;
	const int l4=8;
	const int l5=7;
	
	
	int arrayUno[l1];
	for(int i=0;i<sizeof(arrayUno)/sizeof(*arrayUno) ; i++){
		cout<<"Hola usuario, ingrese un numero: ";
		cin>>arrayUno[i];
	}
	for(int i=0; i<sizeof(arrayUno)/sizeof(*arrayUno);i++){
		cout<<arrayUno[i]<<endl;
	}
	system("pause");
	system("cls");
	
	int arrayDos[l2];
	for(int i=0;i<sizeof(arrayDos)/sizeof(*arrayDos) ; i++){
		cout<<"Hola usuario, ingrese un numero: ";
		cin>>arrayDos[i];
	}
	for(int i=0; i<sizeof(arrayDos)/sizeof(*arrayDos);i++){
		cout<<arrayUno[i]<<endl;
	}
	system("pause");
	system("cls");
	
	int arrayTres[l3];
	for(int i=0;i<sizeof(arrayUno)/sizeof(*arrayUno) ; i++){
		cout<<"Hola usuario, ingrese un numero: ";
		cin>>arrayUno[i];
	}
	for(int i=0; i<sizeof(arrayTres)/sizeof(*arrayTres);i++){
		cout<<arrayUno[i]<<endl;
	}
	system("pause");
	system("cls");
	
	int arrayCuatro[l4];
	for(int i=0;i<sizeof(arrayUno)/sizeof(*arrayUno) ; i++){
		cout<<"Hola usuario, ingrese un numero: ";
		cin>>arrayUno[i];
	}
	for(int i=0; i<sizeof(arrayCuatro)/sizeof(*arrayCuatro);i++){
		cout<<arrayUno[i]<<endl;
	}
	return 0;
}

