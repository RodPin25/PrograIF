#include <iostream>

using namespace std;

//Prototipos de funciones
void menu();
void pregunta();

int main()
{
    menu();
}

void menu() {
    cout << "Hola usuario, por favor selecccione un numero" << endl;
    int numero;
    cin >> numero;

    switch (numero)
    {
    case 1:
    case 3:
        cout << "Usted ingreso al área común" << endl;
        break;
    case 5:
    case 7:
        cout << "Usted ingreso al área espcífica" << endl;
        break;
    default:
        cout << "No nos encontramos en ese semestre, por favor ingrese un semestre válido" << endl;
        menu();
        break;
    }

    pregunta();
}

void pregunta() {
    cout << "Desea ingresar a otro semestre? (Presione Y si desea ingresar a otro semestre o N en caso contrario)" << endl;
    char selec;
    cin >> selec;
    selec = toupper(selec);

    if (selec == 'Y')
        menu();
    else if (selec == 'N')
        cout << "Nos vemos usuario" << endl;
    else {
        cout << "Por favor ingrese una letra válida" << endl;
        pregunta();
    }
}


