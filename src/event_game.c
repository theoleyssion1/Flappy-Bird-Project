/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** event_lobby
*/

#include "main.h"

void event_game(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed) {
            save_score(game);
            sfRenderWindow_close(game->window->window);
        }
        pause_game(game);
    }
    movement_of_bird(game);
    tube_movement(game);
    reset_tube(game);
    check_bird_and_tube(game);
}
