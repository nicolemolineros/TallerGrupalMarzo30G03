#include "Donantes.h"

/* En general muy buen trabajo. Revisen los comentarios en los diferentes archivos para que
vean como lo podrían mejorar principalmente a nivel de estilo */

int main (){
	persona donantes[4][10];
   int counter[4]={0};
   int opcion;
   do{
	  opcion=menu();
      switch(opcion){
         case 1:
            agregarDonante(donantes,counter);
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