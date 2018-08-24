#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*              pedir  numeros  hasta que el usuario quiera, mostrar:
					1-Suma de los negativos.
					2-Suma de los positivos.
					3-Cantidad de positivos.
					4-Cantidad de negativos.
					5-Cantidad de ceros.
					6-Cantidad de números pares.
					7-Promedio de positivos.
					8-Promedios de negativos.
					9-Diferencia entre positivos y negativos, (positvos-negativos). */

    int numero;
    int acumuladorPositivo = 0;
    int acumuladorNegativo = 0;
    int contadorPositivo = 0;
    int contadorNegativo = 0;
    int contadorCeros = 0;
    int contadorPares = 0;
    int maximo;
    int bandera = 0;
    float promedioPositivos;
    float promedioNegativos;
    char respuesta;


    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

            if(numero>0)
            {
                acumuladorPositivo=acumuladorPositivo+numero;
                //acumuladorPositivo+=numero;
                contadorPositivo++;
            }else
            {
                if(numero<0)
                {
                    acumuladorNegativo+=numero;
                    contadorNegativo++;
                }else
                {
                    contadorCeros++;
                }
            }
            if(numero%2==0)
            {
                contadorPares++;
            }
            if(bandera==0 || numero>maximo)
            {
                maximo = numero;
                bandera = 1;
            }







        printf("Desea ingresar otro numero? s/n");
        fflush(stdin);
        scanf("%c", &respuesta);


    }while(respuesta=='s');

    promedioPositivos = (float)acumuladorPositivo/contadorPositivo;


    printf("el acumulado de positivo es: %d\n", acumuladorPositivo);
    printf("el acumulado de negativos es: %d\n", acumuladorNegativo);
    printf("la cantidad de positivos es: %d\n", contadorPositivo);
    printf("la cantidad de negativos es: %d\n", contadorNegativo);
    printf("la cantidad de ceros es: %d\n", contadorCeros);
    printf("la cantidad de pares es: %d\n", contadorPares);
    printf("El promedio de positivos es: %.2f\n", promedioPositivos);
    printf("el  numero maximo es: %d\n", maximo);

    return 0;
}
