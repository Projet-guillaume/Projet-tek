/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** h
*/

#define exit_win __asm__("movl $1, %eax\n\tmovl $0, %ebx\n\t int $0x80");
#define exit_loose __asm__("movl $1, %eax\n\tmovl $1, %ebx\n\t int $0x80");
#define exit_error __asm__("movl $1, %eax\n\tmovl $84, %ebx\n\t int $0x80");
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct user_s {
    pid_t pid;
    pid_t pid_two;
    struct sigaction act;
    char **map_void;
    char **map_pos;
    int player;
} user_t;

char *my_strcpy(char const *src);
char *my_revstr(char *str);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
int my_atoi(char *str);
char *my_getline(int fd);
void send_mult_sig(int nb, user_t user);
void count_sig_player_1(int sig, siginfo_t *info, void *content);
void count_sig_player_2(int sig, siginfo_t *info, void *content);
void missed_or_not(int sig, siginfo_t *info, void *context);
char **format_string(char *s);
int err_size_string(char *s);
user_t input_valid(char *s, user_t user);
void next_turn(void);
void player_two(struct sigaction act, user_t user, char *pid_hote);
void player_one(struct sigaction act, user_t user);
char **my_str_word_array(char *s, char letter);
void display_map(char **map);
char **map_void(void);
int gest_error(char *map);
int display_void(int i);
char **start_map(char *str);
char **map_player_one(char *map);
int check_boats(char *map);
char **start_map(char *str);
user_t init_map(user_t user, char *pos);
user_t display_pack(int x, int y, user_t user);
void transfert_map(user_t user, int y, int x);
int touch_or_not(char **tab, int y, int x);
int display_void(int i);
int check_loose(char **boats);
int check_win(char **boats);
int display_usage(void);
void increm(char p, int *k);

int tmp[3];
