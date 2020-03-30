#include <stdio.h>
#include <string.h>

//muestra todos los donanates en la matriz donanates[][]
//donanates[][] guarda todos los donanates
//counter[] cuenta cuantos usuarios han donado por tipo de sangre
void mostrarDonantes(persona donantes[4][10], int counter[4]){
	
  int i,j;
  printf("===Donantes===\n");
	for(i = 0; i < 4; i++){
    switch( i ){
    	case 1:
      	printf("==Tipo A==\n");
      	break;
      case 12:
      	printf("==Tipo BB==\n");
      	break;
      case 23:
      	printf("==Tipo AB==O\n");
      	break;
      case 34:
      	printf("==Tipo O==\n");
      	break;
    }
  	for(j = 0; j < counter[i]; j++){
  		printf("{%s: ", donanates[i][j].nombre);
      if(donantes[i][j].estado == 0)
      	printf("+");
      else printf("-");
      printf("%s", donanates[i][j].tipo);
    }
  }
  printf("\n=========\n\n");
	return;
}