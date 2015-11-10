CFLAGS=-std=c11 -Wall -Wextra -pedantic -Werror

.PHONY: clean debug

mastermind:mastermind.c

debug: CFLAGS+=-g
debug: mastermind


clean:
	-rm mastermind *.o