#include <iostream>


using namespace std;

//Prototipo de funcion
int fibonacci(int num);

int main()
{
    cout << "Ingrese un numero: ";
    int numero;
    cin >> numero;
    cout << "El numero fibonacci es: " << fibonacci(numero);
}

int fibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    else {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}


