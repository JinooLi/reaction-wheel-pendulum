COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11 -Wmissing-field-initializers -Iinc

SOURCES = main.c src/print.c src/test.c src/interface.c
RESULTS = main

main: $(SOURCES)
	$(COMPILER) $(CFLAGS) -o main $(SOURCES)
	./$(RESULTS)

run: main
	./$(RESULTS)

clean:
	rm -f $(RESULTS)