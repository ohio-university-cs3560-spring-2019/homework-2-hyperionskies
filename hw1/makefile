prog1: main.o lib/hw1.a | bin
	g++ -I ./include/ -o ./bin/prog1 main.o lib/hw1.a

main.o: src/main.cc | lib
	g++ -c src/main.cc 

lib/hw1.a: src/hw1.cc include/hw1.h | lib
	g++ -c src/hw1.cc; ar rcv hw1.a hw1.o; mv hw1.a lib

src/main.cc: | src
ifneq ($(main.cc),)
	 main.cc src
endif

src/hw1.cc: | src
ifneq ($(hw1.cc),)
	hw1.cc src
endif

include/hw1.h: | include
ifneq ($(hw1.h),)
	mv hw1.h include
endif

lib:
	mkdir lib

bin:
	mkdir bin

include:
	mkdir include; mv hw1.h include

src:
	mkdir src; mv hw1.cc src; mv main.cc src

clean:
	rm -r *.o