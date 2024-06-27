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
    sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue)
        loop_menu(game);
}

void retry_menu(game_t *game)
{
    game->sprite[RETRY].rect_float =
    sfSprite_getGlobalBounds(game->sprite[RETRY].sprite);
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    if ((sfFloatRect_contains(&game->sprite[RETRY].rect_float,
    game->mouse.x, game->mouse.y) == sfTrue &&
    sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue) {
        game->speed = -6;
        game->nbr_game ++;
        loop_game(game);
    }
}
