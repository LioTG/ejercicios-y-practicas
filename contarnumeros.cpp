#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int n;
    int cont = 0;
    do
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if (n != 0)
            ;
        {
            cont++;
        }

    } while (n != 0);

    cout << "Numero de datos leidos: " << cont << endl;

    _getch();
    return 0;
}