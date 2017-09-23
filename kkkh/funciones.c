#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define M 10


void alta (EPersona persona [], int tam)
{

    int banderaEncontro = 0, i;

    for (i=0; i < tam ; i++)
    {
        if (persona[i].estado==0)
        {
            printf("Ingrese nombre : \n");
            fflush(stdin);
            gets(persona[i].nombre);
            persona[i].estado=1;
            banderaEncontro=1;
            printf("Ingrese apellido: \n");
            scanf("%d", &persona[i].apellido);
            while (persona[i].numero < 0 )
            {
                fflush(stdin);
                printf("numero ingresado invalido. Vuela a ingresar \n");
                scanf("%d", &persona[i].numero);
            }
            printf("Ingrese id: \n");
            scanf("%d", &persona[i].id);
            break;
        }
    }
    if(!banderaEncontro)
    {
        printf("No hay espacio suficiente!!!");
    }
}
void baja (EPersona persona [], int tam)
{
    int banderaEncontro=0, i;
    int auxInt;
    char respuesta;
    printf("Ingrese ID: ");
    scanf("%d", &auxInt);
    while(fflush(stdin))
    {
        printf("Error. ingrese ID correcto \n");
        scanf("%d", auxInt);
        system("pause");
    }
    for(i=0; i<tam; i++)
    {
        if(persona[i].nombre == 1)
        {
            if(auxInt == persona[i].id)
            {
                printf("%s\t%s\t%d\n", persona[i].nombre, persona[i].apellido,persona[i].numero);
                printf("¿Esta seguro de eliminar el usuario? s/n: ");
                respuesta = getche();
                if(respuesta=='s')
                {
                    printf("\n usuarios eliminados\n");
                    persona[i].nombre = 0;
                    system("pause");
                }
                else if (respuesta=='n')
                {
                    printf("\n Accion cancelada por el usuario!!! \n");
                    system("pause");
                }
                else
                {
                    printf("\n La opcion ingresada no es valida. Reingrese \n");
                    system("pause");
                }

                banderaEncontro=1;
            }
        }
    }
}
void modificar (EPersona persona [], int tam)
{
    EPersona personaAux;
    int i, j;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(persona[i].nombre, persona[j].nombre) > 0)
            {
                personaAux = persona[i];
                persona[i] = persona[j];
                persona[j] =  personaAux;
            }

        }
    }
}

void nuevallamada (EPersona persona[], int tam)
{
    int i, j, falla3g=0, fallalte=0, fallaequipo=0, bandera=0, motivos;

    for(j=0; j<tam; j++)
    {
        if(persona[j].nombre && persona[j].nombre)
        {


        }
        else if(persona[j].id>0)
        {
            mayorDe0++;
        }
        else if( persona[j].id > 10)
        {
            de10a20++;
        }
    }

    if(hasta18 >= de10a20 && hasta30 >= mayorDe40)
    {
        falla3g = hasta18;
    }
    else
    {
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else
        {
            mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--)
    {
        printf("%02d|",i);

        if(i<= hasta18)
        {
            printf("*");
        }
        if(i<= de19a35)
        {
            bandera=1;
            printf("\t*");
        }
        if(i<= mayorDe35)
        {
            if(bandera==0)
                printf("\t\t*");
            if(bandera==1)
                printf("\t*");

        }
        printf("\n");#include <stdio.h>

