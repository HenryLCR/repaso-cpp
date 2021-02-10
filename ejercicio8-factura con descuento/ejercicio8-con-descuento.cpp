#include <iostream>

using namespace std;

int main(){

    double subtotal=0, total=0, impuesto=0.15, calculo_descuento=0, calculo_impuesto=0;
    int descuento=0;
    
    cout<<"--- Factura ---"<< endl;
    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtotal;

    cout<<"Ingrese el Descuento (0 , 10 , 15, 20): ";
    cin>>descuento;
    
    calculo_descuento = (subtotal*descuento)/100;
    calculo_impuesto = (subtotal - calculo_descuento) *impuesto;
    total = subtotal - calculo_descuento + calculo_impuesto;

    cout<<"-------------"<< endl;
    cout<<"El Total a pagar es: " << total << endl;

    return 0;
}