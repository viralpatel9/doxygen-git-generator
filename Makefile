all:
	gcc -o main src/main.c

clean:
	rm -f main

run: all
	./main

.PHONY: all clean run