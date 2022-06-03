CC := g++
CFLAGS := -Wall -O0 -g

all: console_test

console_test: engine.o bridgeConsole.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f *.o console_test