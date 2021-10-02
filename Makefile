CC = g++

SOURCES = main.cpp Database.cpp Cars.cpp

all:
	$(CC) $(SOURCES) -o main

run:
	@./main

clean:
	@rm -rf *.o main