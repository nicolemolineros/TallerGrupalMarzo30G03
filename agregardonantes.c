#include "Donantes.h"

void agregarDonante(persona donantes[4][10], int counter[4]){
	
	persona newPersona;
	char estado;
	int bloodType;
	
	printf("Nombre: "); scanf("%s", newPersona.nombre);
	printf("Tipo de sangre: "); scanf("%s"), newPersona.tipo);
	printf("+ o - :"); scanf("%c", &estado);
	if(estado == '+'){
		newPersona.estado = 0;
	}else{
		newPersona.estado = 1;
	}
	
	if(newPersona.tipo == 'A'){
		bloodType = 0;
	}else if(newPersona.tipo == 'B'){
		bloodType = 1;
	}else if(newPersona.tipo == 'AB'){
		bloodType = 2;
	}else{
		bloodType = 3;
	}
	
	if(counter[bloodType] >= 10){
		printf("No se pudo agregar donanate, arreglo lleno\n");
		return;
	}else{
		donanates[bloodType][counter[bloodType]++];
		printf(">>> {%s %c%s} agregado", newPersona.nombre, estado, newPersona.tipo);
	}
	
	return;
}
