all: program

program: main buscarDonante agregarDonantes mostrarDonantes
	gcc -o bloodBank Main.o mostrarDonantes.o agregardonantes.o banco.o

mostrarDonantes: mostrarDonantes.c Donantes.h
	gcc -c mostrarDonantes.c
agregarDonantes: agregardonantes.c Donantes.h
	gcc -c agregardonantes.c
buscarDonante: banco.c Donantes.h
	gcc -c banco.c
	
main: Main.c Donantes.h
	gcc -c Main.c