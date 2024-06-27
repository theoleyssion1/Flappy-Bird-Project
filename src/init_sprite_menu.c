/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** init_sprite_lobby
*/

#include "main.h"

static void init_sprite_menu_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/menu_button.png",
                                                NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {1060, 600};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_game_over(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/game_over.png",
        NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {800, 200};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_retry_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/retry_button.png",
                                                NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {760, 600};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

void init_sprite_menu(game_t *game)
{
    init_sprite_menu_button(&game->sprite[MENU]);
    init_retry_button(&game->sprite[RETRY]);
    init_game_over(&game->sprite[GAME_OVER]);
}
