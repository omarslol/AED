## Autor de la resolución:  
◦ Usuario github: omarslol  
◦ Legajo: 1558171  
◦ Apellido: Rosales  
◦ Nombre: Omar  

## * Trabajo: 01-Adición  
  * Etapa #1: Análisis del problema:  
    * Problema:  
      * Obtener del usuario dos numeros y mostrarle la suma  
    * Hipotesis:  
      * Pedir por pantalla al usuario que ingrese dos numeros enteros por teclado y mostrar en la pantalla el resultado de la suma de los dos valores enteros  
    * Modelo IPO:  
    ~~~
      Entrada:  
        a Entero  
        b Entero  
      Proceso:  
        r Suma de los Enteros  
      Salidad:  
        r Entero  
    ~~~
  * Etapa #2 Diseño de la Solución   
    * Léxico: ∀ a,b е Z / a+b=r, r e Z  
    * Representación visual:  
        ![adicion](https://github.com/omarslol/AED/blob/master/Imagenes/Adicion/Adicion.png)
    * Representación textual:  
      ~~~
      Leer Entero a,b,r;
      Escribir "******Suma de Numeros Enteros******";
      Escribir "Ingrese un numero entero: ";
      Leer a;
      Escribir "Ingrese otro numero entero: ";
      Leer b;
      r<-(a+b);
      Escribir "El resultado de la suma es: " r;
      //otra forma
      Escribir "El resultado de la suma es: " a+b;
      ~~~
## Compilador usados: Code Blocks y PSeInt
