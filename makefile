# Makefile para laboratorio 0: Brun, Cedrés, Da Costa, Molina, Nuñez
# Puede que tenga que ejecutarlo como "make -f makefile.txt"
# ###Variables####
CC= g++
CFLAGS = -Wall -g

# ###Ejecutable###

main: DTObjetoRoto.o Ninio.o JuegoMesa.o Libro.o Objeto.o main.o
	$(CC) $(CFLAGS) DTObjetoRoto.o Ninio.o JuegoMesa.o Libro.o Objeto.o main.o -o Libreria

# ###Linkedicion de cada archivo necesario###
main.o: main.cpp Ninio.h Libro.h JuegoMesa.h DTObjetoRoto.h
	$(CC) $(CFLAGS) -c main.cpp

Objeto.o: Objeto.h
	$(CC) $(CFLAGS) -c Objeto.cpp

Libro.o: Libro.h Objeto.o
	$(CC) $(CFLAGS) -c Libro.cpp Objeto.cpp

JuegoMesa.o: JuegoMesa.h Objeto.o
	$(CC) $(CFLAGS) -c JuegoMesa.cpp Objeto.cpp

Ninio.o: Ninio.h Objeto.o
	$(CC) $(CFLAGS) -c Ninio.cpp Objeto.cpp

DTObjetoRoto.o: DTObjetoRoto.h
	$(CC) $(CFLAGS) -c DTObjetoRoto.cpp
