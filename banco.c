#include "Donantes.h"

void buscarDonante(persona donantes[4][10]){
  int i,j;
  char name[20];
  
  printf("Ingrese el nombre del donante que necesita:\n");
  scanf("%s", name);
  for(i = 0; i < 4; i++){
    for(j = 0; j < 10; j++){
      if(!strcmp(donantes[i][j].nombre, name) == 0){
        printf("El donante %s fue encontrado exitosamente en el sistema\n", donantes[i][j].nombre);
        printf("%s: [%s, %d]", donantes[i][j].nombre, donantes[i][j].tipo, donantes[i][j].estado);
        return;
      }   
    }
  }
  printf("El donante %s no ha sido ingresado en el sistema", donantes[i][j].nombre); 
  return;
}


