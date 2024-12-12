all: program clean


program: src.o function.o
	gcc src.o function.o -o program

src.o: src.c
	gcc -c src.c -o src.o

function.o: function.c
	gcc -c function.c -o function.o

clean: *.o
	rm *.o
