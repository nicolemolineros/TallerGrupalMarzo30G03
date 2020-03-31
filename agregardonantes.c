#include "Donantes.h"

void agregarDonante(persona donantes[4][10], int counter[4]){
	
	persona newPersona;
	int estado;
	int bloodType;
	
	printf("Nombre: "); scanf("%s", newPersona.nombre);
	printf("Tipo de sangre: "); scanf("%s", newPersona.tipo);
	fflush(stdin);
	printf("1.+ o 0.- :"); scanf("%d", &estado);
	if(estado == 1){
		newPersona.estado = 0;
	}else{
		newPersona.estado = 1;
	}
	
	if(!strcmp(newPersona.tipo, "A")){
		bloodType = 0;
	}else if(!strcmp(newPersona.tipo, "B")){
		bloodType = 1;
	}else if(!strcmp(newPersona.tipo, "AB")){
		bloodType = 2;
	}else{
		bloodType = 3;
	}
	
	if(counter[bloodType] >= 10){
		printf("No se pudo agregar donante, arreglo lleno\n");
		return;
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
