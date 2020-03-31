#include "Donantes.h"


int main (){
	persona donantes[4][10];
   int opcion;
   do{
	  opcion=menu();
      switch(opcion){
         case 1:
            agregardonantes();
            break;
         case 2:
            mostrarDonantes(donantes,counter);
            break;
         case 3:
            buscarDonante(donantes);
            break;

      }
   }while(opcion!=4);

	return 0;
}