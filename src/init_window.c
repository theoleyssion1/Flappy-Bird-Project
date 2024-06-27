/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** init_window
*/

#include "main.h"
#include <stdlib.h>

int init_window(game_t *game)
{
    game->window = malloc(sizeof(window_t));
    game->window->videomode.bitsPerPixel = 32;
    game->window->videomode.height = 1080;
    game->window->videomode.width = 1920;
    game->window->window = sfRenderWindow_create(game->window->videomode,
    "Flappy Bird", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window->window, 60);
    return 0;
}
