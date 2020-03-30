#include <stdio.h>
#include "Donantes.h"

void agregarDonante(persona donantes[4][10], int i,int j ){
	printf("Digite su nombre: ");
	scanf("%s", donantes[ i ][ j ].nombre );
	printf("Digite el tipo de sangre: ");
	scanf("%s", donantes[ i ][ j ].tipo);
	printf("Digite el estado: ");
	scanf("%d", &donantes[ i++ ][ j++ ].estado);
}
