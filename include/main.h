/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** for include function
*/

#ifndef FLAPPYBIRD_H
    #define FLAPPYBIRD_H
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include "define.h"

typedef struct window_s {
    sfVideoMode videomode;
    sfRenderWindow *window;
    sfEvent event;
} window_t;

typedef struct sprite_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfVector2f pos;
    sfClock *clock;
    sfBool active;
    sfIntRect rect_int;
    sfFloatRect rect_float;
} sprite_t;

typedef struct music_s {
    sfMusic *song;
    float volume;
} music_t;

typedef struct text_s {
    sfText *text;
    sfFont *font;
} text_t;

typedef struct game_s {
    window_t *window;
    sprite_t *sprite;
    sfVector2i mouse;
    music_t music;
    text_t *text;
    int *score;
    float speed;
    int nbr_game;
    char *nbr_score;
    int loop;
} game_t;

typedef struct save_s {
    int skin_color;
    sfVector2f pos_player;
    sfIntRect map_rect;
} save_t;

int print_help(void);
int init_all(game_t *game);
void init_sprite(game_t *game);
void init_sprite_lobby(game_t *game);
void init_sprite_game(game_t *game);
int init_window(game_t *game);
void loop(game_t *game);
void event_lobby(game_t *game);
void event_game(game_t *game);
void movement_of_bird(game_t *game);
void pause_game(game_t *game);
void destroy_all(game_t *game);
void tube_movement(game_t *game);
void reset_tube(game_t *game);
void init_sprite_menu(game_t *game);
void check_bird_and_tube(game_t *game);
void retry_menu(game_t *game);
void return_menu(game_t *game);
void event_game_over(game_t *game);
void save_score(game_t *game);
void init_text(game_t *game);
void score_board(game_t *game);
void display_menu(game_t *game);
void display_game(game_t *game);
void display_loose(game_t *game);
void init_at_zero(game_t *game);

#endif
