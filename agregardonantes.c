#include "Donantes.h"

void agregarDonante(persona donantes[4][10], int counter[4]){
	
	persona newPersona;
	char estado;
	int bloodType;

	printf("Nombre: "); scanf("%s", newPersona.nombre);
	printf("Tipo de sangre: "); scanf("%s", newPersona.tipo);
	printf("+ o - :"); scanf("%s",&estado);
	
	
	if(estado=='+'){ //FIXME: el estado se podía manera tambien como un enum
		newPersona.estado = 0;
	}else{
		newPersona.estado = 1;
	}


	if(!strcmp(newPersona.tipo, "A")){
		bloodType = 0; // FIXME: aqui también se podrían usar los enums 
	}else if(!strcmp(newPersona.tipo, "B")){
		bloodType = 1;
	}else if(!strcmp(newPersona.tipo, "AB")){
		bloodType = 2;
	}else{
		bloodType = 3;
	}
	
	if(counter[bloodType] >= 10){ // Numero mágico
		printf("No se pudo agregar donante, arreglo lleno\n");
		return; // Este return sobra, pq el de la línea 50 se va a ejecutar
	}else{

		donantes[bloodType][counter[bloodType]] = newPersona;
		printf(">>> {%s ", newPersona.nombre);
		if (newPersona.estado==0){
			printf("+");
		}
		else{
			printf("-");
		}
		printf("%s}", newPersona.tipo);
		counter[bloodType]+=1;

	}
	printf("\n");
	
	return;
}
