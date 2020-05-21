/*
EjemploTipos.cpp
Ejemplo de Tipos de Datos
Omar Rosales
20200521
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int entero=2+3.12;
    double decimal=132.262/5;
    char vari1='F';
    string vari2 = "Hola Mundo";
    bool verdad=(true);
    bool falso=(false);

    cout<<"Tipos de datos mas utilizados: Numericos, Caracteres y Booleanos\n";
    cout<<"\nLos Numericos son Enteros y Flotantes \n";

    cout<<"Tipos de datos Enteros:\n";
    cout<<"1)int, 2)long, 3)longlong, 4)unsigned int, 5)unsigned long \n";
    cout<<"Ejemplo: Sumar 2 + 3,12= "<<entero<<endl;
    cout<<"Los enteros no operan con los decimales\n";

    cout<<"\nTipos de datos Flotantes:\n";
    cout<<"1) float, 2) double\n";
    cout<<"Ejemplo: Dividir 132,262 / 5= "<< decimal<<endl;


    cout<<"\nLos Caracteres son Caractere y Cadenas de caracteres\n";
    cout<<"1) char, 2) String\n";
    cout<<"Tipo char: declaro la variable Vari 1 guardo el dato: "<<vari1<<endl;
    cout<<"Este tipo de datos almacena solamente un carácter en cada variable\n";
    cout<<"Tipo String: declaro la variable Vari 2 guardo el dato: "<<vari2<<endl;
    cout<<"Este tipo de datos almacena dos o mas caracteres a la vez en una sola variable\n";


    cout<<"\nLos Booleanos se utilizan para almacenar valores logicos como falso 'false'(0) y Verdadero 'true'(1)\n";
    cout<<"1) bool\n";
    cout<<"Ejem1: el anio es 2020: "<<verdad<<endl;
    cout<<"Ejem2: el anio es 2019: "<<falso<<endl;


}
