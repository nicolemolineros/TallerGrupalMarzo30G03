#include <stdio.h>
#include <string.h>

typedef struct persona{
   char nombre[ 25 ];
   char tipo[ 2 ];
   int estado;
}persona;

void agregarDonante(persona donantes[4][10], int i,int j );

void mostrarDonantes(persona donantes[4][10], int counter[4]);

void buscarDonante(persona donantes[4][10]);
