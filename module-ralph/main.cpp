#include <iostream>
#include "ralph.h"
#include <conio.h>
/*
 USO DEL PODEROSISIMO ARCHIVO DE CABEZERA
 RALPH V0.1
 FUNCIONALIDADES:
---------------------------------
| venirse()  |
|-> Esta libreria calcula en cuantos segundos se viene Ralph
    Es alterable desde el archivo principal moviendo el valor
    que sigue del rand() % new-value
| teste_de_sexo() |
|-> Sera una funcion que pueda leer ciertos valores y calcular
    la posibiliad de tener sexo del usuario.
*/
using namespace std;

extern int venirse();

int main() {
    cout << venirse();
    _getch();
    return 0;
}