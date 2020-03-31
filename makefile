all: program

program: main calendario
	gcc -o bloodBank main.o mostrarDonanates.o agregarDonantes.o buscarDonante.o
program: main mostrarDonantes agregarDonantes buscarDonante
	gcc -o bloodBank main.o mostrarDonantes.o agregarDonantes.o buscarDonante.o

mostrarDonanates: mostrarDonanates.c Donanates.h
	gcc -c mostrarDonanates.c
agregarDonanate: agregardonantes.c Donanates.h
	gcc -c agregarDonanate.c
buscarDonante: buscarDonante.c Donanates.h
	gcc -c buscarDonante.c
	
main: main.c Donanates.h
	gcc -c main.c