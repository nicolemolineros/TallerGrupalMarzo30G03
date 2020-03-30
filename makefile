all: program

program: main calendario
	gcc -o marzo24_G4 main.o calendario.o
	
mostrarDonanates: mostrarDonanates.c Donanates.h
	gcc -c mostrarDonanates.c

agregarDonanate: agregarDonanate.c Donanates.h
	gcc -c agregarDonanate.c

buscarDonante: buscarDonante.c Donanates.h
	gcc -c buscarDonante.c
	
donar_sangre: donar_sangre.c Donanates.h
	gcc -c donar_sangre.c

main: main.c Donanates.h
	gcc -c main.c
