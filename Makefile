all: grafo.o
	gcc grafo.o main.c -o main
	
grafo.o: grafo.h
	gcc -c grafo.c
	
clean: 
	erase *.o main.exe

run:
	main.exe

