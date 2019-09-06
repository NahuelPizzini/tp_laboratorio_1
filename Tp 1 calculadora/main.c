#include <stdio.h>
#include <stdlib.h>
#include "baseCalculadora.h" //mi biblioteca

int main()
{
    float numeroUno;
    float numeroDos;
    float resultado;
    char opcion;
    char continuar = 's';

    do
    {
        printf("Ingrese el primer numero: ");
        scanf("%f", &numeroUno);
        //pido los numeros
        printf("\nIngrese el segundo numero: ");
        scanf("%f", &numeroDos);
        //opciones del switch
        int opcion;
        printf("\n 1. Sumar");
        printf("\n 2. Restar");
        printf("\n 3. Dividir");
        printf("\n 4. Multiplicar");
        printf("\n 5. Factorial");
        printf("\n 6. Salir");
        fflush(stdin);

        printf("\nElija la opcion que desee realizar (1-2-3-4-5-6): ");
        scanf("%i", &opcion);

        switch(opcion)
        {
        case 1:
            resultado = sumaDeOperandos(numeroUno,numeroDos);
            printf("la suma de %0.2f y %0.2f es: %0.2f\n", numeroUno,numeroDos,resultado);
            break;
        case 2:
            resultado = restaDeOperandos(numeroUno,numeroDos);
            printf("la resta de %0.2f - %0.2f es: %0.2f \n", numeroUno,numeroDos,resultado);
            break;
        case 3:
            if(numeroDos > 0 || numeroDos < 0)
            {
                resultado = divisionDeOperandos(numeroUno,numeroDos);
                printf("La division de %0.2f / %0.2f es: %0.2f \n", numeroUno,numeroDos,resultado);
            }
            if(numeroDos == 0)
            {
                printf("Error, no se puede dividir a un numero por cero. ");
            }
            break;
        case 4:
            resultado = multiplicacionDeOperandos(numeroUno,numeroDos);
            printf("la multiplicacion de %0.2f * %0.2f es: %0.2f \n", numeroUno,numeroDos,resultado);
            break;
        case 5:
            if(numeroUno > 0)
            {
                resultado = factorial(numeroUno);
                printf("el factorial del primer numero  %f es: %f  \n", numeroUno,resultado); //tener cuidado con el tipo de variable que lo pido y cual lo muestro
            }
            if(numeroUno < 0)
            {
                printf("no se puede sacar factorial de un numero negativo\n",numeroUno);
            }
            if (numeroDos >0)
            {
                resultado = factorial(numeroDos);
                printf("el factorial del segundo numero %f es: %f \n",numeroDos,resultado);
            }
            if(numeroDos < 0)
            {
                printf("no se puede sacar factorial de un numero negativo\n",numeroDos);
            }
            break;
        case 6:
            printf("adios! \n");
            continuar = 'n';
            break;
            default:
            printf("Por favor, ingrese una opcion correcta ");
            break;
        }
        system("pause");
        system("cls");
        printf("si desea continuar presione (s), si desea salir precione (n)\n"); //segunda salida para salir sin ingresar los numeros
        fflush(stdin);
        scanf("%c", &continuar);
        if(continuar == 'n')
        {
            printf("adios!! vuelva prontos!!! \n");
        }
        if(continuar != 's' & continuar!= 'n')
        {
            printf("opcion invalida. reingrese dato, ultilice (s) para continuar o (n) para salir \n");
            fflush(stdin);
            scanf("%c", &continuar);
        }
    }
    while(continuar == 's');
    return 0;
}




/*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones*/


