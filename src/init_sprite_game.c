/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** init_sprite_lobby
*/

#include "main.h"

static void init_sprite_bird(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/piaf.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {760, 290};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_pause_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/pause_button.png",
        NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {100, 100};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_up_tube(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/up_tube.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {2000, -200};
    sprite->scale = (sfVector2f) {3.5, 3.5};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_down_tube(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/down_tube.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {2000, 800};
    sprite->scale = (sfVector2f) {3.5, 3.5};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

void init_sprite_game(game_t *game)
{
    init_sprite_bird(&game->sprite[BIRD]);
    init_pause_button(&game->sprite[PAUSE]);
    init_up_tube(&game->sprite[UP_TUBE]);
    init_down_tube(&game->sprite[DOWN_TUBE]);
}
