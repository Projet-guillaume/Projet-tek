/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "map.h"

#define exit_error __asm__("movl $1, %eax\n\tmovl $0, %ebx\n\t int $0x80");

typedef struct reference_sprite {
    sfMusic *music;
    sfVector2f Spos;
    sfIntRect rect;
    sfSprite *sprite;
    sfTexture *texture;
    char **map;
    sfClock *clock;
    sfFont *font;
    sfText *text;
} refer_t;

char *my_strcpy(char const *src);
char *my_revstr(char *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
int my_atoi(char *str);
char **my_str_word_array(char *s, char letter);
int init_menu(char **path);
int init_opt(char **path);
int event_menu(sfRenderWindow *window);
int event_opt(sfRenderWindow *window, int status);
int select_level(sfRenderWindow *window);
int init_select_level(void);
sfVector2f init_pos_menu(int x, int y);
sfIntRect init_rect_menu(int top, int left, int width, int height);
void lauch_refresh(int status, sfRenderWindow *window);
int event_game(sfRenderWindow *window, int status, int level);
int button_pressed_or_not(sfVector2i Mpos, sfVector2f Spos);
int pressed_realeased(sfEventType type, sfRenderWindow *window, int i);
char *my_itoa(int nb);
int init_map(void);
int init_stat_player(void);
int init_player(void);
int init_pointeur(void);
int init_bout_inter_map(void);
void refresh_game(sfRenderWindow *window, refer_t *ref);
void refresh_game_agg(sfRenderWindow *window, refer_t *ref);
sfText *display_biome(sfText *text);
sfText *display_level(sfText *level);
sfText *display_money(sfText *money);
char *create_cord_str(char *x, char *y);
sfText *display_cord_map(sfText *cord_map);
int init_inter_map(void);
refer_t *init_spawn(void);
refer_t *init_annim_herbe(refer_t *ref);
int rand_spawn(void);
int check_direct(int x_direc, int y_direc);
void check_move_player_bis(void);
void check_move_player(void);
void draw_text(sfRenderWindow *window);
int appli_anim_herbe(int *rect, int nb, refer_t *ref);
int appli_move(int nb, refer_t *ref);
int change_inter(sfRenderWindow *window, refer_t *ref);
int check_annim_herbe(sfRenderWindow *window, refer_t *ref);
void break_sound(sfMusic *music);
void init_music_game(void);
int pause_game(sfRenderWindow *window, refer_t *ref);
int init_pause(void);
void help_slash_ennemy(int nb, int i);
void help_slash_player(int *b, int check);
void help_slash(int nb, int i);
void help_casses(int *b, sfRenderWindow *window, int i, sfVector2i Mpos);
void help_casse(int *b, sfRenderWindow *windown, int i);
void gemmes(int nb);
void init_inventaire(void);
int chx_gemmes(int i);
sfText *init_biome(char *sco, int x, int y, int size);
void init_stat(int spe);
void init_image_combat(void);
int button_pressed_or_not(sfVector2i Mpos, sfVector2f Spos);
int pressed_realeased(sfEventType type, sfRenderWindow *window, int i);
void init_stat_mobs_help(void);
void init_stat_mobs(void);
sfVector2f init_pos_combat(int x, int y);
sfIntRect init_rect_combat(int top, int left, int width, int height);
void init_slash_player_pos(int i, int nb);
void init_slash_player_rec(int i, int nb);
void init_slash(int nb);
int chx_value(int i);
void loop_pos_slash(int *b, int nb, int check, int i);
void loop_attack_player(int *b, int nb, int check);
sfVector2f init_pos_combat(int x, int y);
void pos_combat(int i);
sfIntRect init_rect_combat(int top, int left, int width, int height);
void rect_combat(int i);
void init_image_combat(void);
void move_player_ennemy(void);
void loop_pos_slash_ennemy(int *b, int nb, int check, int i);
void loop_ennemy_attack(int *b, int nb, int check);
void init_slash_ennemy(int nb);
void init_slash_ennemy_pos(int i, int nb);
void init_slash_ennemy_rec(int i, int nb);
void init_image_ennemy_pos(int i);
void init_image_ennemy_rec(int i);
int event_combat(sfEvent event, sfRenderWindow *window, int *b);
void player_attack(int i, sfRenderWindow *window, int *b);
void player_attack_spe(int i, sfRenderWindow *window, int *b);
void player_item(int i, sfRenderWindow *window, int *b);
void attack_physical(int who, int i);
void attack_spe(int who, int spe, int i);
int reni_value(int i);
int effect_rock(int def, int *effect);
int effect_plant(int hp, int *effect, int max_hp);
void effect_electic(int *effect, int *b);
int effect_fire(int hp, int *effect);
void effect_ice(int *effect, int *b);
int effect_poison(int hp, int *effect);
void appli_effect_player(int *effect, int *b, int *hp);
int effect_plant_down(int hp, int *effect, int max_hp);
int effect_rock_down(int def, int *effect);
void effect_electic_down(int *effect, int *b);
void init_all_stats(void);
int effect_fire_down(int hp, int *effect);
void effect_ice_down(int *effect, int *b);
int effect_poison_down(int hp, int *effect);
int disp_att_play_ru(int *b, int *status, int i, int *first);
int disp_att_play_ph(int *b, int *status, int i, int *first);
int disp_att_mob(int i, int *status, int *first, int rng);
int cal_effect_mob(int *first, int i, int *b);
void lts_mob(sfRenderWindow *window, sfText *text, sfText *texto, int i);
void display_base(sfRenderWindow *window);
int cal_effect_player(int *first, int i, int *b);
void lts_mob(sfRenderWindow *window, sfText *text, sfText *texto, int i);
int lauch_cmb(int att_spe, int status_mob, sfRenderWindow *window);
int chx_val_biome(int c);
void init_pnj(void);
void text_pnj(void);
void text_close(void);

refer_t refer_s[50];
