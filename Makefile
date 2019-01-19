output: testing.o Arraylist.o
	g++ testing.o Arraylist.o -o output

testing.o: testing.cpp
	g++ -c testing.cpp

Arraylist.o: Arraylist.cpp  Arraylist.h 
	g++ -c Arraylist.cpp

clean:
	rm *.o output
