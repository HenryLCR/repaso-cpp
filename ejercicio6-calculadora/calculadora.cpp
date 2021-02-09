#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, suma=0, resta=0, multipli=0, divi=0;
    
    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;

    suma = a+b;
    resta  = a-b;
    multipli = a*b;
    divi = a/b;

    cout<<endl;
    
    cout<<"La suma de a + b es: "<< suma <<endl;
    cout<<"La resta de a - b es: "<< resta <<endl;
    cout<<"La multiplicacion de a * b es: "<< multipli <<endl;
    cout<<"La division de a / b es: "<< divi <<endl;

    return 0;
}