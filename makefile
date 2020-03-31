all: program

program: main 
	gcc -o bloodBank main.o mostrarDonantes.o agregardonantes.o banco.o
	
mostrarDonantes: mostrarDonantes.c 
	gcc -c mostrarDonantes.c

agregardonantes: agregardonantes.c 
	gcc -c agregardonantes.c

banco: banco.c 
	gcc -c banco.c
	
main: Main.c 
	gcc -c main.c
