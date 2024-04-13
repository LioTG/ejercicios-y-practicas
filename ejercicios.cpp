#include <iostream>
#include <conio.h>

using namespace std;

int mayorEntero(int num1, int num2, int num3)
{
    int mayor = max({num1, num2, num3});
    return mayor;
}

int main()
{
    int numero1, numero2, numero3;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    int mayor = mayorEntero(numero1, numero2, numero3);

    cout << "\nEl mayor de los numeros es: " << mayor << endl;

    _getch();
    return 0;
}