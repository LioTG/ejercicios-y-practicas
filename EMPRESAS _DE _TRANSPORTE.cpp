#include <iostream>
using namespace std;

int oultursagan=0, cruzdelsurgan=0, lineagan=0, co=0, cc=0,cl=0, hotel30usd=0;

char get_transporte(){
    char transport;
    while (true) {
        cout << "Ingrese transporte (B) Buscama /(V) Vip " << endl;cin >> transport;
        if (transport == 'B' || transport == 'V' || transport=='F') {break;} else{cout <<" Ingrese dato correcto: "<< endl;}
    }
    return toupper(transport);
}

char get_empresa (){
    char empresasel;
    while (true){
        cout << "Ingrese la empresa O/C/L: " << endl; cin>>empresasel;
        toupper(empresasel);
        if (empresasel=='O' || empresasel=='C' || empresasel== 'L') {break;}
    }
    return toupper(empresasel);
}

char get_hotel(){
    char hotel;
    while (true){
        cout << "Ingrese su hotel Pinos/Emperador/Cañaveral: " << endl;cin >> hotel;
        toupper(hotel);
        if (hotel=='P'||hotel=='E'||hotel=='C') {break;}
    }
    return toupper(hotel);
}

int main(){

    char transporte, empresa,hotel;int dias_viaje=0, precio=0;;
    while (true) {
        transporte = get_transporte();
        if (transporte=='F'){break;}
        empresa = get_empresa();
        hotel = get_hotel();
        do{
        cout << "Ingrese dias de viaje: " << endl;cin >> dias_viaje;
        } while (dias_viaje<=3);
       switch (empresa){
           case 'O': co++; if(transporte=='B'){ precio=150; oultursagan+=precio;}else if(transporte=='V'){precio=230;oultursagan+=precio;}
               break;
           case 'C':cc++; if(transporte=='B'){ precio=200; cruzdelsurgan+=precio;}else if (transporte=='V'){precio=300; cruzdelsurgan+=precio;}
               break;
           case 'L':cl++; if(transporte=='B'){ precio=100; lineagan+precio;}
               break;
       }
       if(hotel=='E'||hotel=='C') {hotel30usd++;}
    }
    int ganmax=0;
    cout << "Ganancias oultura: " << oultursagan << endl;
    cout << "Cantos usaron oulrsa: " << co<< endl;
    cout << "Ganancias Cruz del sur: "<< cruzdelsurgan << endl;
    cout << "Cantos usaron cruz del sur: " << cc<< endl;
    cout << "Ganancias Linea: " << lineagan<<endl;
    cout << "Cantos usaron linea:" << cl<< endl;
    ganmax=max(lineagan, max(oultursagan, cruzdelsurgan));
    cout << "La que mas ganacias tuvo: "<<endl;
    if (ganmax==lineagan){ cout << "LINEA"; } 
    if (ganmax==oultursagan) {cout << "OULTURSA";}
    if (ganmax==cruzdelsurgan) {cout<< "CRUZ DEL SUR";}
}
