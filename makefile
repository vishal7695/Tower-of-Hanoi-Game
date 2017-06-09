gameon: test1 test2 test3 test4
	gcc -o gameon update.o functions.o stopwatch.o toh.o -I. -lpthread

test1: update.c
	gcc -c update.c

test2: functions.c
	gcc -c functions.c

test3: stopwatch.c
	gcc -c stopwatch.c -lpthread

test4: toh.c
	gcc -c toh.c

clean:
	rm hellomake update.o functions.o stopwatch.o toh.o 
