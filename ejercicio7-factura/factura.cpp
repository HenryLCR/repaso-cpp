#include <iostream>

using namespace std;

int main(){

    double subtotal=0, total=0, impuesto=0.15;
    
    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtotal;

    total = subtotal + (subtotal * 0.15);

    cout<<endl;
    cout<<"El Total a pagar es: " << total << endl;

    return 0;
}