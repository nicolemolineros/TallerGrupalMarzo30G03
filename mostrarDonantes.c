
#include "Donantes.h"

//muestra todos los donanates en la matriz donanates[][]
//donanates[][] guarda todos los donanates
//counter[] cuenta cuantos usuarios han donado por tipo de sangre
void mostrarDonantes(persona donantes[4][10], int counter[4]){
	
  int i,j;
  printf("===Donantes===\n");
	for(i = 0; i < 4; i++){ // FIX numero mágico
    switch( i ){
    	case 0: // FIX aqui se podrían usar enums
      	printf("==Tipo A==\n");
      	break;
      case 1:
      	printf("==Tipo B==\n");
      	break;
      case 2:
      	printf("==Tipo AB==\n");
      	break;
      case 3:
      	printf("==Tipo O==\n");
      	break;
    }
    // FIX: la identación de este código debería mejorarse. 
  	for(j = 0; j < counter[i]; j++){
  		printf("{%s: ", donantes[i][j].nombre);
      if(donantes[i][j].estado == 0)
      	printf("+");
      else printf("-"); // FIX: ojo esta identación hace dificil de entender. 
		printf("%s}", donantes[i][j].tipo); // La
    }
	printf("\n");
  }
  printf("\n=========\n\n");
	return;
}