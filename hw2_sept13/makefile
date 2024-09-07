flags = -std=c++17 -Wall -I .

program2functions.o : program2functions.cc program2functions.h
	g++ $(flags) -c $< -I .

testLeapYear : testLeapYear.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testLastDayOfMonth : testLastDayOfMonth.cc program2functions.o
	g++ -$(flags) $^ -o $@
	./$@

testValidDate : testValidDate.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testNextDate : testNextDate.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

testPreviousDate : testPreviousDate.cc program2functions.o
	g++ $(flags) $^ -o $@
	./$@

program2 : program2.cc program2functions.o
	g++ $(flags) $^ -o $@

checkit : checkit.cc
	g++ $(flags) $^ -o $@

testprogram2a : program2 checkit test1-input.txt correct-test1.txt
	./program2 < test1-input.txt > student-test1.txt
	./checkit 0

testprogram2b : program2 checkit test2-input.txt correct-test2.txt
	./program2 < test2-input.txt > student-test2.txt
	./checkit 1

testprogram2c : program2 checkit test3-input.txt correct-test3.txt
	./program2 < test3-input.txt > student-test3.txt
	./checkit 2

testprogram2d : program2 checkit test4-input.txt correct-test4.txt
	./program2 < test4-input.txt > student-test4.txt
	./checkit 3

clean :
	rm student-test*txt checkit program2 *.o testLeapYear testLastDayOfMonth testValidDate testNextDate testPreviousDate

