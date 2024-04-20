// SOLUCION PRACTICA CALIFICADA 1 - Ingenieria de Software
// PC01 - A - Pregunta 02

#include <iostream>
#include <conio.h>

using namespace std;

void GenerarNumeros(long long num, int &AAAA, int &BBB, int &CC, int &D)
{
    long long q;

    D = num % 10;
    q = num / 10;

    CC = q % 100;
    q = q / 100;

    BBB = q % 1000;
    q = q / 1000;

    AAAA = q % 10000;
    q = q / 10000;

    // For Test
    // cout << "D : " << D << endl;
    // cout << "CC : " << CC << endl;
    // cout << "BBB : " << BBB << endl;
    // cout << "AAAA : " << AAAA << endl;
}

void ImprimirCodigo(int AAAA, int BBB, int CC, int D)
{
    cout << "El código encriptado es: ";

    ((AAAA >= 1000 && AAAA <= 3000) && cout << "@") ||
        ((AAAA >= 4000 && AAAA <= 6000) && cout << "#") ||
        ((AAAA >= 7000 && AAAA <= 9000) && cout << "%") ||
        cout << "?";

    cout << " ";

    ((BBB >= 100 && BBB <= 300) && cout << "X") ||
        ((BBB >= 400 && BBB <= 600) && cout << "E") ||
        ((BBB >= 700 && BBB <= 900) && cout << "R") ||
        cout << "*";

    cout << " ";

    cout << char(CC + 3);

    cout << " ";

    (D >= 0 && D <= 5) && cout << "737" || (D > 5 && D <= 9) && cout << "373";
}

int main()
{

    // Declaracion de Variables
    long long num, q;
    int AAAA = 0, BBB = 0, CC = 0, D = 0;

    // numero: AAAABBBCCD

    cout << "Ingrese numero de 10 dígitos: ";
    cin >> num;

    GenerarNumeros(num, AAAA, BBB, CC, D);

    ImprimirCodigo(AAAA, BBB, CC, D);

    _getch();
    return 0;
}

// PC01 - A - Pregunta 03

#include <iostream>
#include <conio.h>

using namespace std;

short GenerarPuntaje(float sueldo, char tipo_viv, char tarjeta, char carga)
{
    short puntos_sueldo, puntos_vivienda, puntos_tarjeta, puntos_carga, puntos_total;

    puntos_sueldo = (sueldo < 1500) * 6 + (sueldo >= 1500 && sueldo <= 6000) * 12 + (sueldo > 6000) * 18;
    puntos_vivienda = (tipo_viv == 'F' || tipo_viv == 'f') * 2 + (tipo_viv == 'A' || tipo_viv == 'a') * 5 + (tipo_viv == 'P' || tipo_viv == 'p') * 10;
    puntos_tarjeta = (tarjeta == 'N' || tarjeta == 'n') * 0 + (tarjeta == 'S' || tarjeta == 's') * 6;
    puntos_carga = (carga == 'S' || carga == 's') * 6 + (carga == 'N' || carga == 'n') * 3;

    puntos_total = puntos_sueldo + puntos_vivienda + puntos_tarjeta + puntos_carga;

    return puntos_total;
}

long long GenerarCodigo(short num)
{
    // int num = 65;
    int base = 2;
    long long resultado = 0;
    int cont = 0;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    resultado = resultado + (num % base) * pow(10, cont);
    num = num / base;
    ++cont;

    return resultado;
}

int main()
{
    // setlocale(LC_ALL, "spanish");
    locale::global(locale("spanish"));

    // Declaracion de Variables
    float sueldo;
    char tipo_viv, tarjeta, carga;
    short puntos_total;
    long long codigo1, codigo2;

    // ENTRADA
    cout << "Sueldo mensual : ";
    cin >> sueldo;
    cout << "Tipo de vivienda(F : familiar; A: alquilada; P: propia) : ";
    cin >> tipo_viv;
    cout << "Tarjeta de crédito(N : no tiene; S: si tiene) : ";
    cin >> tarjeta;
    cout << "Tiene carga familiar(N : no tiene; S: si tiene) : ";
    cin >> carga;

    // PROCESO
    puntos_total = GenerarPuntaje(sueldo, tipo_viv, tarjeta, carga);
    codigo1 = GenerarCodigo(puntos_total);
    codigo2 = GenerarCodigo(tipo_viv);

    // SALIDA
    cout << "Puntaje Obtenido: " << puntos_total << endl;
    ((puntos_total > 20) && cout << "Se le otorga el préstamo(0: No; 1: Sí) : 1") || (cout << "Se le otorga el préstamo(0: No; 1: Sí) : 0");

    ((puntos_total > 20) && cout << "\nCódigo de Tarjeta:" << codigo1 << " " << codigo2 << endl);

    char c = _getch();
    return 0;
}