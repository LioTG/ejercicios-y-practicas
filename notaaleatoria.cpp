#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

int Genera(int a, int b)
{

    int c;
    c = a + rand() % (b + 1 - a);
    return c;
}

int main()
{

    int i;

    srand(time(NULL));

    for (i = 1; i <= 30; i++)
    {
        int nota = Genera(0, 20);
        cout << "La nota del estudiante " << i << " es: " << nota << endl;
    }

    _getch();
    return 0;
}