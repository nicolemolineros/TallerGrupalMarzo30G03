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
		newPersona.estado = 43;
	}else{
		newPersona.estado = 45;
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
		printf(">>> {%s %c%s} agregado", newPersona.nombre, newPersona.estado, newPersona.tipo);
		counter[bloodType]+=1;

	}
	
	return;
}
