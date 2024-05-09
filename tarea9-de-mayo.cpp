#include <iostream>
#include <cstdlib>
using namespace std;

void menu();
void sumElementos();
void elementoMayor();
void promedio();
void find();
void pregunta(){
	cout<<"Desea realizar otro ejercicio?(presiona Y/N): ";
	char seleccion;
	cin>>seleccion;
	seleccion=toupper(seleccion);
	if(seleccion=='Y'){
		system("cls");
		menu();
	} else if(seleccion=='N'){
		cout<<"Nos vemos usuario"<<endl;
	} else
		pregunta();
}

int main(int argc, char *argv[]) {
	menu();
	return 0;
}

void menu() {
	cout<<"Hola usuario, elija el ejercicio que desea realizar"<<endl;
	cout<<"1. Suma de los elementos de un array"<<endl;
	cout<<"2. Elemento mayor"<<endl;
	cout<<"3. Promedio"<<endl;
	cout<<"4. Buscar un numero"<<endl;
	int selec;
	cin>>selec;
	
	switch(selec){
	case 1:
		sumElementos();
		break;
	case 2:
		elementoMayor();
		break;
	case 3:
		promedio();
		break;
	case 4:
		find();
		break;
	default:
		cout<<"Seleccione un numero valido"<<endl;
		menu();
		break;
	}
}
void sumElementos(){
	int numeros[5];
	int suma=0;
	cout<<"Ingrese los numeros al array"<<endl;
	for(int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
		cin>>numeros[i];
		suma+=numeros[i];
	}
	cout<<"El resultado de la suma de todos los elementos del array es: "<<suma<<endl;
	system("pause");
	pregunta();
}
	
void elementoMayor(){
	int numeros[5];
	cout<<"Ingrese los numeros al array"<<endl;
	for(int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
		cin>>numeros[i];
	}
	int mayor=numeros[0];
	for(int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	cout<<"El numero mayor es: "<<mayor<<endl;
	system("pause");
	pregunta();
}
void promedio(){
	int numeros[5];
	int suma=0;
	cout<<"Ingrese los numeros al array"<<endl;
	for(int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
		cin>>numeros[i];
		suma+=numeros[i];
	}
	cout<<"El promedio es: "<<suma/(sizeof(numeros)/sizeof(*numeros))<<endl;
	system("pause");
	pregunta();
}
void find(){
	int numeros[10];
	cout<<"Ingrese los numeros al array"<<endl;
	for(int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
		cin>>numeros[i];
	}
	cout<<"Ahora ingrese que numero desea buscar"<<endl;
	int busqueda;
	cin>>busqueda;
	bool founded=false;
	for(int i=0; i<sizeof(numeros)/sizeof(*numeros);i++){
		if(numeros[i]==busqueda){
			cout<<"Felicidades "<<i<<endl;
			founded=true;
		}
	}
	if(!founded){
		cout<<"Mala suerte"<<endl;
	}
	system("pause");
	pregunta();
}
