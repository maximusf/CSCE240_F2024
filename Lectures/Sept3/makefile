# my makefile to manage sept3.h, sept3.cc, sept3.o, driver.cc, driver
compiler = g++
options = -Wall -std=c++17
compile = $(compiler) $(options) -c
link = $(compiler) $(options)

sept3.o : sept3.cc sept3.h
	$(compile) $<

driver.o : driver.cc sept3.h
	$(compile) $<

driver : driver.o sept3.o
	$(link) $^ -o $@
	./$@

# now just type make driver whenever you need it
