/*
** EPITECH PROJECT, 2024
** Flappy-Bird
** File description:
** event_game_over
*/

#include "main.h"

void event_game_over(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed) {
            save_score(game);
            sfRenderWindow_close(game->window->window);
        }
        retry_menu(game);
        return_menu(game);
    }
}
