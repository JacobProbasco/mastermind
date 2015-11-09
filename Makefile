CFLAGS+=-std=c11 -Wall -Werror -Wno-deprecated -Wextra -Wstack-usage=1024 -pedantic

.PHONY: clean debug

poker: poker.o card.o deck.o

debug: CFLAGS+=-g
debug: poker


clean:
	-rm poker *.o
