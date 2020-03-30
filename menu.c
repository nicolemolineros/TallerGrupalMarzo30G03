

#include "Donantes.h"
typedef struct persona{
   char nombre[ 25 ];
   char tipo[ 2 ];
   int estado;
   int can;
}persona;

int menu(){
   int opc;
   printf( "\n BANCO DE SANGRE ¡BIENVENIDO! \n" );
   printf( "============================\n" );
   printf( "1 Agregar donante \n " );
   printf( "2 Mostrar donantes \n ");
   printf( "3 Buscar donante \n" );
   printf( "4 Donar sangre \n" );
   printf( "5 Salir \n" );
   printf( "Digite su opcion por favor \n" );
   printf("==>"); scanf( "%d", &opc );
   return opc;
}