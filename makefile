sum: main.o sum.o
	g++ main.o sum.o -o sum

main.o: main.cpp
	g++ -Wall -g -c main.cpp

sum.o: sum.cpp sum.h
	g++ -Wall -g -c sum.cpp

.PHONY : clean

clean :
	-rm *.o $(objects) sum
