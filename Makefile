# Makefile de exemplo (Manual do GNU Make)
     
CFLAGS = -Wall  # flags de compilacao
LDFLAGS = -lm

CC = gcc

# arquivos-objeto
	objects = Questoes.o Resolucoes.o 

all: Calculator

Calculator: Resolucoes.o Questoes.o
	$(CC) -o Calculator Resolucoes.o Questoes.o $(LDFLAGS)

Resolucoes.o: Resolucoes.c Resolucoes.h
	$(CC) -c $(CFLAGS) Resolucoes.c

Questoes.o: Questoes.c Resolucoes.h
	$(CC) -c $(CFLAGS) Questoes.c

clean:
	rm -f $(objects) Calculator
