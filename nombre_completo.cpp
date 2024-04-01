#include <iostream>
//Tengo que incluir la libreria string
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Hola usuario, por favor ingrese su nombre completo"<<endl;
	string nombre;
	getline(cin,nombre);
	cout<<"El nombre que ingreso es: "<<nombre;
	return 0;
}

