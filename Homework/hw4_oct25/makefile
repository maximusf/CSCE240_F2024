flags = -std=c++17 -Wall


style : height.h heightrange.h height.cc heightrange.cc
	cpplint height.h heightrange.h height.cc heightrange.cc



height.o : height.cc height.h
	g++ $(flags) -c $< -I .

testheight1 : testheight1.cc height.o
	g++ $(flags) $^
	./a.out

testheight2 : testheight2.cc height.o
	g++ $(flags) $^
	./a.out

testheight3 : testheight3.cc height.o
	g++ $(flags) $^
	./a.out

heightrange.o : heightrange.cc heightrange.h height.h
	g++ $(flags) -c $< -I .

testheightrange1 : testheightrange1.cc heightrange.o height.o
	g++ $(flags) $^
	./a.out

testheightrange2 : testheightrange2.cc heightrange.o height.o
	g++ $(flags) $^
	./a.out

testheightrange3 : testheightrange3.cc heightrange.o height.o
	g++ $(flags) $^
	./a.out

testheightrange4 : testheightrange4.cc heightrange.o height.o
	g++ $(flags) $^
	./a.out

clean :
	rm  *.o a.out studentoutput.txt

