#include <iostream>

using namespace std;

unsigned short origenN=0, origenI=0, emerE=0,emerS=0,emerR=0, horamadru=0, horamañana=0,horatarde=0,horanoche=0;
char tipo_emergencia(){
    char tipo_emer;
    while(true){
        cout <<"ingrese el tipo de emergencia E/S/R: " << endl; cin>> tipo_emer;tipo_emer=toupper(tipo_emer);
        if (tipo_emer=='E'|| tipo_emer=='S' ||tipo_emer=='R' || tipo_emer=='F'){break;}
    }
    return tipo_emer;
}

unsigned  short hora_ocurrida(){
    unsigned short hora;
    while (true){
        cout << "Ingrese la hora que ocurrio: " << endl; cin>> hora;
        if (hora>=0 && hora<=23) {break;}
    }
    return hora;
}

char tipo_origen(){
    char origen;
    while (true){
        cout << "Ingrese el origen N/I: " << endl; cin>>origen;origen=toupper(origen);

        if (origen=='N' || origen=='I') {break;}
    }
    return origen;
}


int main(){
    unsigned short hora, maxemer; char tipoemer, origen;
    while (true) {
        tipoemer = tipo_emergencia(); if (tipoemer=='F') {break;}
        switch (tipoemer) {
            case 'E':emerE++;break;
            case 'S':emerS++;break;
            case 'R':emerR++;break;default:break;
        }
        hora = hora_ocurrida();
        hora <= 5 && hora >= 0 ?  horamadru++ : hora <= 12 && hora >= 6 ? horamañana++ : hora >= 13 &&hora <= 17? horatarde++: horanoche++;
        origen = tipo_origen();
        switch (origen) {
            case 'N':origenN++;break;
            case 'I':origenI++;break;
            default:break;
        }
    }
    cout<< "Emergencia ecologica: " << emerE << endl<< "Emer sanitaria: " << emerS<< endl<< "Emergencia radioactiva: "
    << emerR << endl; maxemer= max(horamadru,max(horamañana, max(horatarde, horanoche)));
    if (maxemer==horamadru){ cout << "madrugada";}if (maxemer==horamañana){cout << "hora mañana";}
    if (maxemer==horanoche){cout << "hora noche";}if (maxemer==horatarde){cout << "Hora tarde";}
    return 0;
}
