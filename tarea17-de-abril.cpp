#include <iostream>
#include <windows.h>
#include <conio.h>
#include<string>
using namespace std;

//Prototipos de funciones
void gotoxy(int x,int y);
void menu(string nombre);
void menuDos(string nombre);
void primerfuncion();
void segundafuncion();
void tercerafuncion();
void printAscii();
void saludar();
void pregunta();
//Prototipos de funciones

int selec=1;
string nombre;
bool active=true;

int main(int argc, char *argv[]) {
	cout<<"Ingrese su nombre por favor"<<endl;
	cin>>nombre;
	do{
		if(selec==1)
			menu(nombre);
		else if(selec==2)
			menuDos(nombre);
		else
			cout<<"Seleccione una opcion valida"<<endl;
	}while(active);
	return 0;
}
void gotoxy(int x, int y) {
	HANDLE hCon;
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	
	SetConsoleCursorPosition(hCon, dwPos);
	
}

void menu(string nombre){
	system("cls");
	cout<<"Hola "<<nombre<<" bienvenido"<<endl;
	cout<<"Ingrese una de las opciones."<<endl;
	cout<<"1. Esribir hola mundo donde sea que desee el usuario"<<endl;
	cout<<"2. Imprimir un numero en el centro de la consola"<<endl;
	cout<<"3. Imprimir una palabra en cualquier parte de la consola"<<endl;
	
	int seleccion;
	cin>>seleccion;
	
	switch(seleccion){
	case 1:
		primerfuncion();
		break;
	case 2:
		segundafuncion();
		break;
	case 3:
		tercerafuncion();
		break;
	default:
		cout<<"Ingrese una opcion valida"<<endl;
		menu(nombre);
		break;
	}
	
	pregunta();
}

void menuDos(string nombre) {
	system("cls");
	cout<<"Hola "<<nombre<<" bienvenido"<<endl;
	cout<<"1. Escribir un caracter ASCII raro"<<endl;
	cout<<"2. Saludar a un companero"<<endl;
	int selccion;
	cin>>selccion;
	
	switch(selccion) {
	case 1:
		printAscii();
		break;
	case 2:
		saludar();
		break;
	default:
		cout<<"Seleccione un opcion valida"<<endl;
		menuDos(nombre);
		break;
	}
	
	pregunta();
}
void primerfuncion(){
	system("cls");
	int x,y;
	cout<<"Ingrese dos coordenadas"<<endl;
	cout<<"\nX: ";
	cin>>x;
	cout<<"\nY:";
	cin>>y;
	
	if(y<30)
		gotoxy(x,y);
	else
		primerfuncion();
	printf("Hola mundo\n");
	
	system("pause");
}
	
void segundafuncion(){
	system("cls");
	cout<<"\nIngrese un numero: ";
	int num;
	cin>>num;
	
	gotoxy(60,14);
	printf("%d \n",num);
	system("pause");
}
	
void tercerafuncion(){
	cout<<nombre<<" ingrese una palabra, por favor"<<endl;
	string pal;
	cin>>pal;
	system("cls");
	
	for(int i=1;i<=10;i++){
		gotoxy(i,i);
		cout<<pal<<endl;
	}
	system("pause");
}
	
void printAscii(){
	//30 en y esta fuera de los limites de mi consola.
	gotoxy(30,25);
	printf("%c",207);
	cout<<endl;
	
	system("pause");
}
	
void saludar(){
	system("cls");
	gotoxy(60,12);
	cout<<"Hola mi gente latino"<<endl;
	system("pause");
}
void pregunta(){
	system("cls");
	cout<<"Ingrese a que menu desea ir ahora (presione 3 si desea salir)"<<endl;
	int preSelec;
	cin>>preSelec;
	
	if(preSelec==3){
		cout<<"Nos vemos usuario"<<endl;
		active=false;
	}
	else if(preSelec!=1 && preSelec!=2) {
		cout<<"Seleccione un numero valido";
		system("pause");
		pregunta();
	} else
	   selec=preSelec;
}


