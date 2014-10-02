#
#
FLAGS_OPTS=-Wall -lm

#
SRC=methods.c

#
OBJECTS=objs/methods.o

#
all: objs/methods.o
	gcc $(OBJECTS) $(FLAGS_OPTS) -o methods

#
objs/methods.o: methods.c
	gcc $(FLAGS_OPTS) -c $< -o $@

#
clean:
	rm -rf $(OBJECTS)