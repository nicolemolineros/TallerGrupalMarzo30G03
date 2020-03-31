all: program

program: main mostrarDonantes agregarDonantes buscarDonante
	gcc -o bloodBank main.o mostrarDonantes.o agregarDonantes.o buscarDonante.o
	
mostrarDonantes: mostrarDonanates.c Donanates.h
	gcc -c mostrarDonante.c

agregarDonante: agregardonantes.c Donanates.h
	gcc -c agregarDonante.c

buscarDonante: buscarDonante.c Donanates.h
	gcc -c buscarDonante.c
	
main: main.c Donanates.h
	gcc -c Main.c
