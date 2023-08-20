objects = main.o hello.o factorial.o

result: $(objects)
	g++ -o result $(objects)

main.o: main.cpp functions.h

hello.o: hello.cpp functions.h

factorial.o: factorial.cpp functions.h

clean:
	rm *.o result
