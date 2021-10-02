/*
** EPITECH PROJECT, 2018
** Library
** File description:
** my
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <linux/limits.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
#include "struct.h"

void my_putchar(char c);
void my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strcompar(char *str, char *compar);
char *my_revstr(char *str);
char **my_tabcpy(char **tab, char **new_tab);
int size_tab(char **env);
char *my_strcapitalize(char *str);
int my_atoi(const char *str);
char **str_to_word_tab(char *str, char s);
char *my_strcat(char *str_first, char const *str_scnd);
void my_puttab(char **tab);
void my_setenv(char **exe, env_t *env);
int check_her(char *str, char *her, int size);
void my_cd(env_t *env, char **exe);
char *my_getpwd(void);
char *recup_home(char **tab);
void error_hand(int chdi, char *name);
void segfault(int status);
void print_error_no_found(char **exe);
int test_path(char **path, char **exe, env_t *env);
void my_exit(void);
int check_void(char **tab);
int check_is_arg(char *str, char *compare);
void lunch(env_t *env);
char *change_space(char *str);
char **recup_path(char **tab, char **exe);
int separator_ok(char *str);
char **del_env(char **tab, char *exe);
void my_unsetenv(char **exe, env_t *env);
void with_separator(char *str, env_t *env);
void parsing_exe(char **path, char **exe, env_t *env);