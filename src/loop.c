/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** loop
*/

#include "main.h"
#include <stdio.h>

void loop(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfBlack);
    while (sfRenderWindow_isOpen(game->window->window)) {
        sfRenderWindow_clear(game->window->window, sfBlack);
        if (game->loop == START)
            display_menu(game);
        if (game->loop == GAME)
            display_game(game);
        if (game->loop == LOOSE)
            display_loose(game);
        sfRenderWindow_display(game->window->window);
    }
}
