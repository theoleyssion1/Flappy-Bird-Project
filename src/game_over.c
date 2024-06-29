/*
** EPITECH PROJECT, 2024
** Flappy-Bird
** File description:
** game_over
*/

#include "main.h"

void return_menu(game_t *game)
{
    game->sprite[MENU].rect_float =
    sfSprite_getGlobalBounds(game->sprite[MENU].sprite);
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    if ((sfFloatRect_contains(&game->sprite[MENU].rect_float,
    game->mouse.x, game->mouse.y) == sfTrue &&
    sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue) {
        game->loop = START;
        loop(game);
    }
}

void retry_menu(game_t *game)
{
    game->sprite[RETRY].rect_float =
    sfSprite_getGlobalBounds(game->sprite[RETRY].sprite);
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    if ((sfFloatRect_contains(&game->sprite[RETRY].rect_float,
    game->mouse.x, game->mouse.y) == sfTrue &&
    sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue) {
        init_at_zero(game);
        game->nbr_game ++;
        game->loop = GAME;
        loop(game);
    }
}
