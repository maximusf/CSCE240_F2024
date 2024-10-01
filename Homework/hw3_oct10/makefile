# comments
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

flags = -std=c++17 -Wall -I .
compile = g++ $(flags) -c
link = g++ $(flags)

checkincludes : checkincludes.cc program3functions.h program3functions.cc
	$(link) $< -o $@
	./$@ program3functions.h
	./$@ program3functions.cc
	
program3functions.o : program3functions.cc program3functions.h checkincludes
	$(compile) $<
	rm checkincludes

testCountAboveAv : testCountAboveAv.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testSortByCol : testSortByCol.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testSortByRow : testSortByRow.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testMedianInCol : testMedianInCol.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

testModeInCol : testModeInCol.cc checkArraysMatch.cc program3functions.o
	$(link) $^
	./a.out

clean :
	rm *.o a.out checkincludes

