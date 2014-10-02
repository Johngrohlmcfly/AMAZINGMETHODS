#
#
FLAGS_OPTS=-Wall -lm

#
SRC=methods.c

#
OBJECTS=objs/main.o

#
all: objs/main.o
	gcc $(OBJECTS) $(FLAGS_OPTS) -o methods

#
objs/main.o: main.c
	gcc $(FLAGS_OPTS) -c $< -o $@

#
clean:
	rm -rf $(OBJECTS)