all: grafo.o leitor.o
	gcc grafo.o leitor.o novo_main.c -o novo_main
	
grafo.o: grafo.h
	gcc -c grafo.c

leitor.o: includes/leitor.h
	gcc -c "includes/leitor.c"

clean: 
	erase *.o main.exe

run:
	main.exe

