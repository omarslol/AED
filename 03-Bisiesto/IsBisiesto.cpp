/ *
IsBisiesto.cpp
Determinar si el año es bisiesto 
Omar Rosales
20200609
* /



#include <iostream>
#include <assert.h>

bool IsBisiesto (int anio);

int main()
{
    IsBisiesto(2020);
}

bool  IsBisiesto(int anio){
  assert (anio>=1582 && anio%4==0 && (anio%100!=0 || anio%400==0));
}
