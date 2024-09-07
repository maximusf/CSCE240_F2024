# $< = he first prerequisite
# $^ = all prerequisites
# $@ = target

compiler = g++#-14
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

aug27.o : aug27.cc
	$(compile) $^
# g++ -c -Wall -std=c++17 aug27.cc # compile only aug27.cc, show all warnings, using 2017 c++ standards
# g++ -c Wall -std=c++17 $^ 
# same as typing aug27.cc, above

#executable
aug27 : aug27.o 
	$(link) $^ -o $@ 
# link prerequisites and name them the target
	./$@ 
# runs the executable
# g++ -Wall std=c++17 aug27.o
# g++ -Wall std=c++17 $^ 
# same as above
clean :
	rm *.o aug27
