#include <iostream>

using namespace std;

int main(){
    char e=2;
    double promedio=0, Nota1=10, Nota2=15,Nota3=10;
    promedio= (Nota1*0.3)+(Nota2*0.3)+(Nota3*0.40);
    string x; (promedio<=13) ? x= "ESTUDIA SONSO": (promedio>=13 || promedio<=15) ? x="Muy Bien SONSO" : (promedio>=15
            || promedio>20) ? x=" EL DIAVLO ERES INTELIGENTE" : (promedio<=20) ? x="GANASTE": x="GANASTE";
    return 0;
};
