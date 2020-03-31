#include "Donantes.h"

int menu(){
   int opc=0;
   do{
   		printf( "\n BANCO DE SANGRE ¡BIENVENIDO! \n" );
  		printf( "============================\n" );
   		printf( "1 Agregar donante \n " );
   		printf( "2 Mostrar donantes \n ");
   		printf( "3 Buscar donante \n" );
   		printf( "4 Donar sangre \n" );
   		printf( "5 Salir \n" );
   		printf( "Digite su opcion por favor \n" );
   		printf("==>"); scanf( "%d", &opc );
   		switch (opc){
   			case 1:
   				agregarDonante(persona donantes[4][10], int i,int j );
   				break;
   		}
   }while(opc!=5);
   
}

int main (){
	persona Donantes[4][10];
	menu(Donantes);
	return 0;
}