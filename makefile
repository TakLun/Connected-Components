all: submission

submission: connectedComp.o
	g++ -g connectedComp.o -o submission
	
connectedComp.o: connectedComp.cpp
	g++ -g -c connectedComp.cpp
	
clean:
	rm -f *.o submission
