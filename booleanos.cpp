#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	bool quePasa=false;
	char respuesta;
	cout<<"Por favor ingrese una letra (S/N)"<<endl;
	cin>>respuesta;
	respuesta=toupper(respuesta);
	if(respuesta=='S') {
		quePasa=true;
	} else if(respuesta=='N') {
		quePasa=false;
	} else {
		cout<<"No ingreso una letra valida"<<endl;
	}
	if(quePasa) {
		cout<<"El booleano es true"<<endl;
	} else {
		cout<<"El booleano es false"<<endl;
	}
	return 0;
}

