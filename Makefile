##
## EPITECH PROJECT, 2023
## CSFML THE lAST OF US INVENTORY
## File description:
## Makefile
##


TARGET = the_last_of_us_inventory

CFLAGS = -Werror -Wextra -Wall

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-network -lcsfml-audio

CPPFLAGS = -I./include -I./csfml_engine/include

SRC = ./src/main.c \
	  ./src/utils/list.c \
	  ./src/utils/position.c \
	  ./src/utils/string.c \
	  ./src/utils/button.c \
	  ./src/graphic/graphic_create.c \
	  ./src/graphic/graphic_draw.c \
	  ./src/graphic/graphic_init.c \
	  ./src/graphic/graphic_event.c \
	  ./src/graphic/graphic_state.c \
	  ./src/graphic/graphic_text.c \
	  ./src/inventory/inventory_add.c \
	  ./src/inventory/inventory_destroy.c \
	  ./src/inventory/inventory_create.c \
	  ./src/inventory/inventory_getters.c \
	  ./src/inventory/inventory_text.c \
	  ./src/inventory/inventory_event.c \
	  ./src/inventory/inventory_update.c \
	  ./src/inventory/inventory_remove.c \
	  ./src/inventory/inventory_mouse_event.c \
	  ./src/inventory/inventory_init.c \
	  ./src/inventory/item/item.c

OBJ = $(SRC:.c=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	@$(CC) -o $(TARGET) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(TARGET)

re : fclean all
