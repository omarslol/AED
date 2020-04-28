/*
Adición.cpp
Suma de dos numeros enteros
Omar Rosales
20200428
*/



#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, r=0;
    cout<<"******Suma de Numeros Enteros******"<<endl;
    cout<<"Ingrese un numero entero: ";
    cin>>a;
    cout<<"Ingrese otro numero entero: ";
    cin>>b;
    r=a+b;
    cout<<"El resultado de la suma es: "<<r<<endl;
    //otra forma
    cout<<"El resultado de la suma es: "<<a+b<<endl;
    return 0;
}
