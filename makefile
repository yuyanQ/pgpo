table: table.o table.h 
	g++ -g table.o -o table.exe

table.o: table.cpp table.h 
	g++ -std=c++0x -g -c -w table.cpp