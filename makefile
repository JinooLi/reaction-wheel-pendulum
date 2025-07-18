COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11 -Wmissing-field-initializers -Iinc

SOURCES = main.c src/state_estimate.c src/control_pendulum.c src/motor_control.c src/deadline_wait.c src/interface.c
RESULTS = main

main: $(SOURCES)
	$(COMPILER) $(CFLAGS) -o main $(SOURCES)
	./$(RESULTS)

run: main
	./$(RESULTS)

clean:
	rm -f $(RESULTS)