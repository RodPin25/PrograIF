#include <iostream>
#include <string>
using namespace std;

// Prototipo de función cifrar
char cifrar(char caracter);

void menu() {
	cout << "Hola usuario, bienvenido" << endl;
	cout << "Ahora seleccione una opcion" << endl;
	cout << "1. Cifrar contrasena numerica" << endl;
	cout << "2. Cifrar contrasena string" << endl;
	
	int seleccion;
	cin >> seleccion;
	
	switch (seleccion) {
	case 1: {
		cout << "Ingrese su contrasena numerica" << endl;
		int contraN, numero;
		cin >> contraN;
		cout << "Ahora ingrese un numero" << endl;
		cin >> numero;
		int resultado = (contraN + numero) * numero;
		cout << "Contrasena cifrada: " << resultado << endl;
		break;
	}
	case 2: {
		cout << "Ingrese una contrasena: ";
		string contra, stringCifrada;
		cin >> contra;
		for (char &c : contra) {
			stringCifrada += cifrar(c);
		}
		cout << "Contrasena cifrada: " << stringCifrada << endl;
		break;
	}
	default:
		cout << "Opcion no valida" << endl;
	}
}

char cifrar(char caracter) {
	if (caracter == 'a' || caracter == 'A')
		return '4';
	else if (caracter == 'e' || caracter == 'E')
		return '3';
	else if (caracter == 'i' || caracter == 'I')
		return '1';
	else if (caracter == 'o' || caracter == 'O')
		return '0';
	else if (caracter == 'u' || caracter == 'U')
		return '*';
	else
		return caracter; // Devuelve el mismo carácter si no es una vocal
}

int main() {
	menu();
	return 0;
}
