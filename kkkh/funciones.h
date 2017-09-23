#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{

    int id;
    int numero;
    char nombre[50];
    char apellido[100];

} EPersona;

void alta (EPersona [], int);
void baja (EPersona [], int);
void modificar (EPersona [], int);
void nuevallamada (EPersona[], int);
void findellamada (EPersona[], int);
void informar (EPersona [], int);



#endif


