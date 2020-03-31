all: program

program: main mostrarDonantes agregarDonantes buscarDonante
	gcc -o bloodBank main.o mostrarDonantes.o agregarDonantes.o buscarDonante.o
	
mostrarDonanates: mostrarDonantes.c Donanates.h
	gcc -c mostrarDonantes.c

agregarDonanate: agregardonantes.c Donanates.h
	gcc -c agregarDonanate.c

buscarDonante: buscarDonante.c Donanates.h
	gcc -c buscarDonante.c
	
main: main.c Donanates.h
	gcc -c main.c
