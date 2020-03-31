#include "Donantes.h"

void agregarDonante(persona donantes[4][10], int counter[4]){
	
	persona newPersona;
	char estado;
	int bloodType;
	
	printf("Nombre: "); scanf("%s", newPersona.nombre);
	printf("Tipo de sangre: "); scanf("%s", newPersona.tipo);
	fflush(stdin);
	printf("+ o - :"); scanf("%c", &estado);
	if(estado == '+'){
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
	
	printf("bloodtype=%d", bloodType);
	
	if(counter[bloodType] >= 10){
		printf("No se pudo agregar donanate, arreglo lleno\n");
		return;
	}else{
		donantes[bloodType][counter[bloodType]++];
		printf(">>> {%s %c%s} agregado", newPersona.nombre, estado, newPersona.tipo);
	}
	
	return;
}
