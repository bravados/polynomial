all: polinomio

main.o: main.cpp polinomiogenerico.h
	g++ -Wall -g -c main.cpp -I/

polinomio: main.o 
	g++ -o polinomio main.o
