koCXX = g++
CXXflag = -Wall

game : main.o
	$(CXX) $^ $(CXXflag) -o $@
	Make clean

main.o : main.cpp
	$(CXX) -c main.cpp $(CXXflag) -o $@

clean: 
	rm *.o

