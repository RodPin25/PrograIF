#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

//Variables globales
string nombre;
//Variables globales

//Prototipos de funciones
void menu(string nombre);
double hipo();
double anguloF();
double factorial(double numero);
double vuelto(string nombre);
void pregunta();
//Prototipos de funciones

int main(int argc, char *argv[]) {
	cout<<"Ingrese su nombre por favor: ";
	cin>>nombre;
	menu(nombre);
	return 0;
}

void menu(string nombre){
	system("cls");
	cout<<"Hola "<<nombre<<", bienvenido"<<endl;
	cout<<"Seleccione una opcion por favor"<<endl;
	cout<<"1. Calculadora de la hipotenusa"<<endl;
	cout<<"2. Calculadora del angulo faltante"<<endl;
	cout<<"3. Calculadora del factorial de un numero"<<endl;
	cout<<"4. Calculadora de vuelto"<<endl;
	
	int selec;
	cin>>selec;
	int num;
	switch(selec){
	case 1:
		cout<<"El resultado de la hipotenusa es: "<<hipo();
		break;
	case 2:
		cout<<"El resultado del angulo faltante es: "<<anguloF();
		break;
	case 3:
		cout<<"Ingrese un numero por favor: ";
		cin>>num;
		cout<<"El resultado del factorial es: "<<factorial(num);
		break;
	case 4:
		cout<<"Recibe "<<vuelto(nombre)<<" de cambio"<<endl;
		break;
	default:
		cout<<"Seleccione una opcion valida"<<endl;
		system("pause");
		menu(nombre);
	}
	pregunta();
}

double hipo(){
	cout<<"Por favor ingrese los dos lados del triangulo por favor"<<endl;
	cout<<"Adayacente: ";
	int a,o,result;
	cin>>a;
	cout<<"\nOpuesto: ";
	cin>>o;
	
	a=pow(a,2);
	o=pow(o,2);
	int sum=a+o;
	result=pow(sum,0.5);
	return result;
}

double anguloF(){
	cout<<"Ingrese los dos angulos que se conocen por favor"<<endl;
	double l1,l2,sum;
	cout<<"Lado 1: ";
	cin>>l1;
	cout<<"\nLado 2: ";
	cin>>l2;
	
	sum=l1+l2;
	return 180-sum;
}
double factorial(double numero) {
	if(numero==1)
		return 1;
	else
		return numero*factorial(numero-1);
}

double vuelto(string nombre) {
	cout<<nombre<<" por favor ingrese los siguientes valores"<<endl;
	int valor,gasto,cantidad;
	double vuelt=0;
	do{
		cout<<"Cantidad gastada: ";
		cin>>gasto;
		cout<<"\nValor de los billetes: ";
		cin>>valor;
		cout<<"\nCantidad de billetes dado: ";
		cin>>cantidad;
		
		cantidad=valor*cantidad;
	} while(cantidad<gasto);
	if(gasto==cantidad){
		return vuelt;
	} else {
		vuelt=cantidad-gasto;
		return vuelt;
	}
}

void pregunta(){
	cout<<"Desea continuar con el programa (Y/N): ";
	char elec;
	cin>>elec;
	elec=toupper(elec);
	if(elec=='Y'){
		system("pause");
		menu(nombre);
	} else if(elec=='N')
	   cout<<"Nos vemos usuario"<<endl;
	else {
		cout<<"Por favor ingrese una tecla valida"<<endl;
		system("pause");
		pregunta();
	}
}
