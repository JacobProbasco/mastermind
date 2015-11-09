CFLAGS+=-std=c11 -Wall -Werror -Wno-deprecated -Wextra -Wstack-usage=1024 -pedantic

.PHONY: clean debug

mastermind:main.c 

debug: CFLAGS+=-g
debug: mastermind


clean:
	-rm poker *.o
