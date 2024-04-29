#include <iostream>
using namespace  std;
unsigned  int total_pedidos=0, total_pedidos_gratis=1, pedidos_delivery=0, pedidos_mostrador=0, tipo_grande=0,
                            tipo_familiar=0, tipo_superfam =0, total_ganancia=0, tiempo_entregaM=0, tiempo_entregaD=0 ;

unsigned  short tipo_pizza(){
    unsigned short tipo_pizzap;
    cout << "Ingrese el tipo de pizza 1(G)/2(F)/3(SP)";cin >> tipo_pizzap;
    if ( tipo_pizzap<=3){ return tipo_pizzap;} else{ return 0;}

}
char tipo_pedido(){
    char tipo_pedidop;
    cout << "Ingrese el tipo de pedido D/M";cin >> tipo_pedidop;
    if (toupper(tipo_pedidop) == 'D' || toupper(tipo_pedidop) =='M' ){return tipo_pedidop;} else { return 'X';}
}

unsigned short tiempo(){
    unsigned  short  tiempo_entrega;
    cout << "Ingrese tiempo de entrega";cin >> tiempo_entrega;
    if (tiempo_entrega>0){return tiempo_entrega;}
}

unsigned short verif(char tipo, unsigned  short x){
    unsigned short p;
    switch (tipo) {
        case 'M': pedidos_mostrador++; if ( x>20) {total_pedidos_gratis++; tiempo_entregaM=+x;p=1;} else{p=2;} break;
        case 'D' : pedidos_delivery++; if (x>30) {total_pedidos_gratis++; tiempo_entregaD=+x;p=1;}else{p=2;} break;
        default:break;
    }
    return p;

}
void mostrar_total(){
    string msg;
    cout << "TOTAL RECAUDADO: " << total_ganancia << endl;
    cout << "TOTAL DE PEDIDOS GRATIS: " << total_pedidos_gratis << endl;
    cout << "pizzas con mayor demanda"<< endl;
    cout<< "Tiempo entrega promedioD"<< endl;
    cout<< tiempo_entregaD / pedidos_delivery<< endl;
    cout << "tiempo entregapromedio M" <<endl;
    cout << tiempo_entregaM / pedidos_mostrador;

}
int main(){
        char select, tipoped; unsigned short tiempop, tipoPizza, precio, ver;unsigned  short codigo;
    do {
            cout << "INGRESE CODIGO DE PEDIO"<< endl;cin >> codigo;total_pedidos++;
            tipoPizza = tipo_pizza();
            if (tipoPizza == 0) { tipoPizza = tipo_pizza();}
            tipoped = tipo_pedido();
            if (tipoped == 'X') {tipoped = tipo_pedido();}
            tiempop = tiempo();
            ver = verif(tipoped,tiempop);
            if (ver==1) { cout << "Total a pagar: GRATIS"; }
            else {
                switch (tipoPizza) {
                    case 1:precio = 50;tipo_grande++;break;
                    case 2:precio = 60;tipo_familiar++;break;
                    case 3:precio = 68;tipo_superfam++;break;
                }
                total_ganancia= total_ganancia+precio;
            }
            cout << "ver total pedidos, continuar o salir T/C/S";cin >> select;
            if (toupper(select)=='T') {mostrar_total();}
        }while (toupper(select) == 'C' );
}
