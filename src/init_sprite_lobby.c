/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** init_sprite_lobby
*/

#include "main.h"

static void init_background_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/background.png",
    NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {3.5, 2.5};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_sprite_title(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/menu.png", NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {760, 190};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sprite->rect_int.height = 28;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 94;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_play_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/play_button.png",
    NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {660, 600};
    sprite->scale = (sfVector2f) {4.5, 4.5};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_quit_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile("./assets/quit_button.png",
    NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {0.2, 0.2};
    sprite->pos = (sfVector2f) {1700, 950};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_sprite_lobby(game_t *game)
{
    init_background_sprite(&game->sprite[BACKGROUND]);
    init_sprite_title(&game->sprite[TITLE]);
    init_play_button(&game->sprite[PLAY_BUTTON]);
    init_quit_button(&game->sprite[QUIT]);
}
