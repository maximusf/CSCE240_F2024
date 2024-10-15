# makefile

temperature.o : temperature.cc temperature.h
	g++ -std=c++17 -Wall -c temperature.cc

driver.o : driver.cc temperature.h
	g++ -std=c++17 -Wall -c driver.cc

driver : driver.o temperature.o
	g++ -std=c++17 -Wall driver.o temperature.o
	./a.out

clean :
	rm a.out *.o

