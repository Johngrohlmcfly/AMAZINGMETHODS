#
FLAGS_OPTS=-Wall -lm

#
FILES_NAMES=set_variables

#
SRC_DIR=src

#
SRC=$(addsuffix .c,main $(addprefix $(SRC_DIR)/,$(FILES_NAMES)))

#
OBJECTS=$(SRC:.c=.o)

#
OBJ_DIR=objs

#
all: $(OBJECTS)
	gcc $(OBJECTS) $(FLAGS_OPTS) -o methods

#
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc $(FLAGS_OPTS) -c $< -o $@
	
#
clean:
	rm -rf $(OBJECTS)