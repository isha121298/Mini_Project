Project_Name = Quiz Game

#Keeps all the output in a folder
output: main.o
	gcc main.o -o output

#defining main.o
main.o: main.c operations.h functions.h
	gcc -c main.c

#removing all the .o output files and cleaning
clean: 
	rm *.o output
