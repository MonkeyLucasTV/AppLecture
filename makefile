all: journal

Unit.o: Unit1.cpp
	g++ -Wall -c Unit1.cpp

Project1.o: Project1.cpp
	g++ -Wall -c Project1.cpp

Lettre.o: Lettre.cpp
	g++ -Wall -c Lettre.cpp


journal: Unit.o Project1.o Lettre.o 
	g++ -Wall Unit.o Project1.o Lettre.o -o lecture 
