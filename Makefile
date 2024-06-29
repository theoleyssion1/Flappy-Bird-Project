##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

SRC	=	help.c\
		init_all.c\
		init_sprite.c\
        init_sprite_lobby.c\
		init_sprite_game.c\
        init_window.c\
        loop.c\
        event_lobby.c\
		event_game.c\
		bird_movement.c\
		pause_game.c\
		destroy.c\
		tube_movement.c\
		init_sprite_menu.c\
		loose_game.c\
		event_game_over.c\
		game_over.c\
		save_score.c\
		init_text.c\
		score.c\
		init_at_zero.c\
		display.c\

DIR_SRC        =    $(addprefix src/, $(SRC))

MAIN_SRC    =    src/main.c                        \

TEST        =    unit_test.c\

DIR_TESTS    =    $(addprefix tests/, $(TEST))

OBJ_DIR_SRC    =    $(DIR_SRC:.c=.o)

OBJ_MAIN    =    $(MAIN_SRC:.c=.o)

OBJ            =    $(OBJ_DIR_SRC) $(OBJ_MAIN)

CPPFLAGS    =    -I include/                        \

CFLAGS        =    -Wall -Wextra -ggdb3

GRAPHICS	= -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

NAME        =    flappy_bird

$(NAME):    $(OBJ)
		gcc -o $(NAME) -g $(CFLAGS) $(OBJ) $(GRAPHICS)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -rf unit_tests
		rm -rf *.gcov
		rm -f $(NAME)

re:        fclean all

unit_tests:    re
		mkdir unit_tests
		gcc -o unit_tests/unit_tests $(DIR_SRC) $(DIR_TESTS)\
		$(CPPFLAGS) $(LDLIBS) --coverage -lcriterion

tests_run:    unit_tests
		./unit_tests/unit_tests

.PHONY: all clean fclean re tests_run
