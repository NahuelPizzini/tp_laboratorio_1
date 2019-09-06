#include <stdio.h>
#include <stdlib.h>
#include "baseCalculadora.h"
//se operan los float ingresado por el usuario (suma,resta,multiplicacion,division,factorial)
float sumaDeOperandos(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno + numeroDos;

    return resultado;
}

float restaDeOperandos(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno - numeroDos;

    return resultado;
}

float divisionDeOperandos(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno / numeroDos;

    return resultado;
}
float multiplicacionDeOperandos(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno*numeroDos;

    return resultado;
}

int factorial (float numeroUno)
{

    int resultado =1;
    int i;

    for (i =numeroUno; i> 0 ; i--)
    {
        resultado = resultado*i;
    }

    return resultado;

   // for (i = numeroUno; i < 0; i--)  //for (i=(int)a;i!=0;i--)
    //{
      //  resultado = resultado * i;
    //}
   // return resultado;
}

/*int resultado;
    if(numeroUno == 0 || numeroUno == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numeroUno * factorial(numeroUno - 1);
    }
    return resultado;*/
