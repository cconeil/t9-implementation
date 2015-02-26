#!/bin/bash

t9: t9.o constructors.o
	gcc -Wall -std=c99 -g -o t9 t9.o constructors.o

t9.o: header.h t9.c
	gcc -Wall -std=c99 -g -c t9.c

constructors.o: header.h constructors.c
	gcc -Wall -std=c99 -g -c constructors.c
