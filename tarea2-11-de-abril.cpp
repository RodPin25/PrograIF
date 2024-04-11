#include <iostream>
#include<cstdlib>

using namespace std;

string nombre;
//Prototipos
void menu(string nombre);
void pregunta();
void printNum(int num);
void printMsg(string msg);
void printLtr(char ltr);

int main(int argc, char *argv[]) {
	cout<<"Ingrese su nombre"<<endl;
	cin>>nombre;
	
	system("pause");
	menu(nombre);
	return 0;
}

void menu(string nombre){
	system("cls");
	cout<<"Hola "<<nombre<<", bienvenido"<<endl;
	cout<<"Seleccione una opcion"<<endl;
	cout<<"1. imprimir un numero"<<endl;
	cout<<"2. imprimir un mensaje"<<endl;
	cout<<"3. imprimir una letra"<<endl;
	int selec;
	cin>>selec;
	
	string mensaje="";
	switch(selec){
	case 1:
		cout<<"Ingrese un numero"<<endl;
		int numero;
		cin>>numero;
		printNum(numero);
		break;
	case 2:
		cout<<"Ingrese el mensaje que desea imprimir"<<endl;
		
		cin>>mensaje;
		printMsg(mensaje);
		break;
	case 3:
		char letra;
		cout << "Ingrese una letra: ";
		cin >> letra;
		printLtr(letra);
		break;
		
	default:
		
		cout<<"Seleccione una opcion valida"<<endl;
		system("Pause");
		menu(nombre);
		break;
	}
}
	
void printNum(int num){ 
	cout<<"El numero que ingreso es: "<<num<<endl; 
	pregunta();
}
void printMsg(string msg) { 
	cout<<msg<<endl;
	pregunta();
}
void printLtr(char ltr) { 
	cout<<"Le letra que ingreso es: "<<ltr<<endl; 
	pregunta();
}

void pregunta() {
	cout<<"Desea continuar (Y/N)"<<endl;
	char seleccion;
	cin>>seleccion;
	seleccion=toupper(seleccion);
	if(seleccion=='Y'){
		menu(nombre);
	} else if(seleccion=='N'){
		cout<<"Nos vemos usuario"<<endl;
	} else {
		cout<<"Seleccione una opcion valida"<<endl;
		system("pause");
		pregunta();
	}
}

