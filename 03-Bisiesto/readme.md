## Autor de la resolución:  
◦ Usuario github: omarslol  
◦ Legajo: 1558171  
◦ Apellido: Rosales  
◦ Nombre: Omar  

## Trabajo 03-Bisiesto  
*  ### Objectivo:  
  Demostrar el uso de operadores booleanos y expresiones complejas  
*  ### Problema:  
  Dado un año, determinar si es bisiesto  
*  ### Lexico:  
~~~
                          {  1 si  anio ≥ 1582  ^  anio%4 = 0  ^  ( anio%100 ≠ 0  v  anio%400 = 0 )
IsBisiesto(anio)= |anio|
                          {  0 si  anio ≤ 1582  v  anio%4 ≠ 0  v  ( anio%100 = 0  ^  anio%400 ≠ 0 ) 
~~~     
*  ###  Pruebas:  
~~~ 
assert(IsBisiesto(2020));  //true
assert(IsBisiesto(1584));  //true
assert(IsBisiesto(1582));  //false
assert(IsBisiesto(2002));  //false 
~~~  
  
*  ###  Prototipo:  
~~~  
bool IsBisiesto (int anio); 
~~~
*  ###  Definición:  
~~~
bool  IsBisiesto(int anio){
  anio>=1582 && anio%4==0 && (anio%100!=0 || anio%400==0);
}
~~~
*  ###  Arbol de expresión asociado a la expresión de retorno de la función  
  ![Arbol](https://github.com/omarslol/AED/blob/master/Imagenes/Arbol/Arbol.png)
