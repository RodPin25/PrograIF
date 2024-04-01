#include <iostream>
using namespace std;

//Prototipos de funciones (segun chatGPT)
void showMenu();
void conversionMonedas();
void findPrimos();
void findPares();

//Inicio de la funcion main
int main(int argc, char *argv[]) {
	showMenu();
	return 0;
}

//Funcion que mostrara el menú
void showMenu() {
	system("cls");
	int seleccion;
	while (seleccion != 5) { 
		cout << "Hola usuario, por favor seleccione alguna de las opciones que puede observar escribiendo el numero de la misma" << endl;
		cout << "1. Ejercicio de conversion de monedas (quetzales a dolares y viceversa)" << endl;
		cout << "2. Ejercicio de encuentro de numeros primos" << endl;
		cout << "3. Ejercicio de numeros pares" << endl;
		cout << "5. Salir del programa" << endl;
		cin >> seleccion;
		switch (seleccion) {
		case 1:
			conversionMonedas();
			break;
		case 2:
			findPrimos();
			break;
		case 3:
			findPares();
			break;
		case 5:
			cout << "Nos vemos usuario" << endl;
			break;
		default:
			cout << "Opción no válida, por favor seleccione una opción del 1 al 5." << endl;
		}
	} 
}

//Función que convertira las monedas
void conversionMonedas() {
	system("cls");
	int seleccion;
	double cantidad;
	cout<<"Si desea convertir de quetzales a dolares presione el numero 1, caso contrario presione 2"<<endl;
	cin>>seleccion;
	if(seleccion==1) {
		double valorDolar=7.80;
		cout<<"Ingrese la cantidad de quetzales a convertir ";
		cin>>cantidad;
		double conversion=cantidad/valorDolar;
		cout<<"El valor de "<<cantidad<<" quetzales convertido a dolares es de: "<<conversion<<" dolares";
	} else if(seleccion==2) {
		double valorDolar=7.80;
		cout<<"Ingrese la cantidad de quetzales a convertir";
		cin>>cantidad;
		double conversion=cantidad*valorDolar;
		cout<<"El valor de "<<cantidad<<" dolares convertido a quetzales es de: "<<conversion<<" quetzales";
	} else {
		cout<<"No ha seleccionado ninguna opcion";
	}
	
	cout<<"\nPresione una tecla para regresar al menu"<<endl;
	getchar();
	getchar();
	
	showMenu();
}

void findPrimos() {
	system("cls");
	cout<<"Por favor ingrese un numero: ";
	int num;
	cin>>num;
	cout<<"Ahora el programa encontrara los numeros primos desde 1 hasta "<<num<<endl;
	
	int cantidadDivisores=0;
	int paso=1;
	//Inicio del ciclo 
	while(paso<=num) {
		for(int i=1;i<=paso;i++) {
			if(paso%i==0) {
				cantidadDivisores++;
			}
		}
		if(cantidadDivisores<=2) {
			cout<<paso<<" es un numero primo"<<endl;
		}
		cantidadDivisores=0;
		paso++;
	}
	//espero la que el usuario continue el programa
	cout<<"Presione cualquier tecla para regresar al menu";
	getchar();
	getchar();
	
	//regreso al menu
	showMenu();
}

void findPares() {
	system("cls");
	cout<<"Por favor ingrese un numero: ";
	int num;
	cin>>num;
	cout<<"Ahora el programa encontrara los numeros pares desde 1 hasta "<<num<<endl;
	
	int paso=1;
	while(paso<=num) {
		if(paso%2==0) {
			cout<<paso<<" es un numero primo"<<endl;
		}
		paso++;
	}
	
	//espero la que el usuario continue el programa
	cout<<"Presione cualquier tecla para regresar al menu";
	getchar();
	getchar();
	showMenu();
}


