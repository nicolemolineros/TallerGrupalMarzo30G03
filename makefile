all: program

program: main mostrarDonantes agregarDonantes buscarDonante
	gcc -o bloodBank Main.o mostrarDonantes.o agregardonantes.o banco.o

mostrarDonanates: mostrarDonantes.c Donanates.h
	gcc -c mostrarDonantes.c
agregarDonantes: agregardonantes.c Donanates.h
	gcc -c agregardonantes.c
buscarDonante: banco.c Donantes.h
	gcc -c banco.c
	
main: Main.c Donanates.h
	gcc -c Main.c