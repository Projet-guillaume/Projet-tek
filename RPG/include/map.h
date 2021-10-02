/*
** EPITECH PROJECT, 2019
** map
** File description:
** h
*/

typedef struct map_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    int anim;
    char ***info;
} map_s;

typedef struct stat_t {
    int def;
    int fce;
    int fce_spe;
    int hp;
    int hp_max;
    int xp;
    int money;
    int dura;
} stat_rpg;

typedef struct item_t {
    stat_rpg *rpg;
    char *name;
    int level;
    int nb;
    int status;
} item_s;

typedef struct dial_t {
    sfFont *font;
    sfText *text;
    int nb;
} dial_s;

typedef struct player_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    int *status;
    int move;
    int x;
    int y;
    int agg;
    int effect;
    stat_rpg *stat;
    item_s *item;
    dial_s *dial;
} player_s;

typedef struct bouton_inter_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    int status;
} bout_s;

typedef struct inter_cmb_t {
    bout_s *bout;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
} cmb_s;

typedef struct ref_src_cmb {
    sfRenderWindow *window;
    int *b;
    sfText *pv_player;
    sfText *pv_mob;
} ref_scmb;

typedef struct music_game {
    sfMusic *plaine;
    sfMusic *roche;
    sfMusic *desert;
    sfMusic *glace;
    sfMusic *jungle;
    sfMusic *volcan;
    sfMusic *menu;
    int stock;
    int status;
    int dif;
} mus_g;

typedef struct inventaire {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos_inv;
    sfVector2f pos_equip;
    int nb;
    int stack_or_not;
    int type;
} inv_g;

typedef struct pnj {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect *rect;
    sfVector2f pos_pnj;
    sfVector2f pos_quetes;
    sfText *dial;
    int q;
    int nb;
    int c;
    int o;
} pnj_g;

typedef struct refer_game {
    map_s *map;
    player_s *player;
    player_s *mob;
    cmb_s *cmb_inter;
    cmb_s *inter_map;
    sfClock *clock;
    sfClock *clock_mv;
    mus_g *music;
    ref_scmb *src_cmb;
    inv_g *pause;
    pnj_g *pnj;
} ref_game;

ref_game *game;
