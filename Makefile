#
FLAGS_OPTS=-Wall #-lm

#
FILES_NAMES=main set_variables errors math_functions math_methods

#
SRC_DIR=src

#
SRC=$(addsuffix .c,$(addprefix $(SRC_DIR)/,$(FILES_NAMES)))

#
OBJ_DIR=objs

#
OBJECTS=$(addsuffix .o,$(addprefix $(OBJ_DIR)/,$(FILES_NAMES)))

#
all: $(OBJECTS)
	gcc $(OBJECTS) $(FLAGS_OPTS) -o methods

#
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc $(FLAGS_OPTS) -c $< -o $@

#
clean:
	rm -rf $(OBJECTS)
