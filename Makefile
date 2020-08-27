
libbokken.a: bokken.o
	ar rcs ./lib/libbokken.a bokken.o

bokken.o: bokken.cc include/bokken.h
		clang++ -c -Wall -o bokken.o -I ./include bokken.cc

clean:
	rm bokken.o bokken.a
