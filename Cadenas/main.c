#include <stdio.h>
#include <stdlib.h>
#include <string.h>//esto nc para que sirve pero lo agregan igual ..

int main()
{
    /*char nombre [20]= "Anibal";
    char otroNombre[200]= "Pedro";
    int cantidad;
    int compara;
    int i;*/

    char nombre[20];//cuando pones 20 en realidad el maximo es 19 ya que hay una barra cero que le quita un lugar
    int cantidad;

    printf("Ingrese su nombre: ");
    fgets(nombre,20,stdin); //te devuleve el nombre ingresado pero nc bien su funcionalidad optima.

    puts(nombre);


    cantidad = strlen(nombre);
    printf("cantidad %d", cantidad);









    return 0;

    //strcpy(destino,origen);
    //strcpy(nombre,otroNombre);


    /*printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);*/
    //printf("%s", nombre);

    //compara = stricmp(nombre,otroNombre);//sirve para comparar

    /*if(compara==0)
    {
        printf("son iguales");
    }else
    {
        if(compara>0)
        {
            printf("%s esta despues que %s", otroNombre, nombre);
        }else
        {
             printf("%s esta despues que %s", nombre, otroNombre);
        }
    }

    /*cantidad = strlen(nombre); //para contar la cantidad de caracteres que tengo en la cadena (sirve para validar)

    printf("\nLa cantidad de caracteres es : %d", cantidad);*/

     /*strupr(otroNombre);//es para poner todo en mayusc

    printf("%s", otroNombre);*/

    /*strcat(otroNombre, " ");//sirve para poner un espacio entre variantes
    strcat(otroNombre, nombre);//sirve para concatenar
    printf("%s", otroNombre);*/

     /*for(i=0; i<strlen(nombre) ;i++)
    {
        if (tolower(nombre[i])=='a')//te sirve para mostrar la cantidad de la letra seleccionada hay en la palabra
            printf("%c-", nombre[i]);
    }*/







}
