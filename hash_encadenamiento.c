#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define T_TABLA 20

typedef struct _persona{
    char rut[12];
    char * nombre;
    struct _persona * next;

}Persona;

typedef struct _tablaHash{
    int T_TABLA ;
    Persona * tabla[T_TABLA];

}TablaHash;


Persona * crearPersona(char rut, char *nombre){
    Persona * nPersona = (Persona*)malloc(size(Persona));
    strcpy(nPersona->rut,rut);
    strcpy(nPersona->nombre,nombre);
    nPersona->next = NULL;
    return nPersona;
}

int hash(int T_TABLA,char*rut){
    int suma = 0;
    int i = 0;
    while(rut[i] != "\0")(
        sum+=rut[i];
        i++;
    )
    return sum%T_TABLA;
}

int agregar(Persona*nuevaP,TablaHash*tabla){
    int pos = hash(tabla->T_TABLA,nuevaP->rut);
    nuevaP = crearPersona(rut, nombre);

}

