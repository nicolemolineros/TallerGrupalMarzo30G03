all: program

program: main mostrarDonantes agregarDonantes buscarDonante
	gcc -o bloodBank main.o mostrarDonantes.o agregarDonantes.o buscarDonante.o
	
mostrarDonantes: mostrarDonantes.c Donantes.h
	gcc -c mostrarDonantes.c

agregarDonantes: agregardonantes.c Donantes.h
	gcc -c agregarDonanate.c

buscarDonante: buscarDonante.c Donanates.h
	gcc -c buscarDonante.c
	
main: main.c Donantes.h
	gcc -c main.c
