#include <iostream>
#include <cstdlib>
using namespace std;

string compararMensaje(int numero){
	string txtFinal="";
	switch(numero) {
	case 1:
		txtFinal="Como te va?";
		break;
	case 2:
		txtFinal="Todo bien?";
		break;
	case 3:
		txtFinal="Que bueno";
		break;
	case 4:
		txtFinal="Que tal los patojos?";
		break;
	case 5:
		txtFinal="Como les va en la escuela?";
		break;
	default:
		txtFinal="Sos bien trol va? Eleji un numero valido";
		break;
	}
	
	return txtFinal;
}
void menu() {
	cout<<"Hola usuario, bienvenido"<<endl;
	cout<<"\nSeleccione un numero del 1 al 5: ";
	int num;
	cin>>num;
	cout<<compararMensaje(num)<<endl;
	system("pause");
}

int main(int argc, char *argv[]) {
	menu();
	return 0;
}

