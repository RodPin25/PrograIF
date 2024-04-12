#include <iostream>
#include <cstdlib>

using namespace std;
double suma(double num1,double num2);
double resta(double num1, double num2);
double multiplicacion(double num1, double num2);
double divisionEntera(double num1, double num2);

int main()
{
    cout << "Bienvenido usuario" << endl;
    bool active = true;
    do {
        system("cls");
        cout << "Calculadora" << endl;
        cout << "Ingrese dos numeros por favor" << endl;
        double num1, num2;
        cin >> num1;
        cin >> num2;

        system("cls");
        cout << "Numeros ingresados: " << num1 << " " << num2 << endl;
        cout << "Ahora seleccione que operacion desea" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        int selec;
        cin >> selec;

        switch (selec)
        {
        case 1:
            cout << "El resultado de la suma es: " << suma(num1, num2)<<endl;
            break;
        case 2:
            cout << "EL resultado de la resta es: " << resta(num1, num2) << endl;
            break;
        case 3:
            cout << "El resultado de la multiplicacion es: " << multiplicacion(num1, num2) << endl;
            break;
        case 4:
            cout << "El resultado de la division es: " << divisionEntera(num1, num2) << endl;
            break;
        default:
            cout << "Seleccione una operacion valida" << endl;
            break;
        }

        cout << "Desea realizar otra operacion? (Y/N)" << endl;
        char seleccion;
        cin >> seleccion;
        seleccion = toupper(seleccion);
        if (seleccion == 'N') {
            cout << "Nos vemos usuario" << endl;
            active = false;
            break;
        }
        else if (seleccion != 'N' && seleccion != 'Y') {
            cout << "Seleccione una opcion valida" << endl;
        }

    } while (active);
}

double suma(double num1, double num2) { return num1 + num2; }
double resta(double num1, double num2) {return num1 - num2;}
double multiplicacion(double num1, double num2) { return num1 * num2; }
double divisionEntera(double num1, double num2) { return num1 / num2; }




