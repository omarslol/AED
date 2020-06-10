/ *
IsBisiesto.cpp
Determinar si el año es bisiesto 
Omar Rosales
20200609
* /

#include <iostream>
#include <cassert.h>

bool IsBisiesto (int anio);

int main()
{
    assert (IsBisiesto(2020));
}

bool  IsBisiesto(int anio){
  return anio>=1582 && anio%4==0 && (anio%100!=0 || anio%400==0);
}
