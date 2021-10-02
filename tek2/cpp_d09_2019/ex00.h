/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** h
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct cthulhu_s {
    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s {
    cthulhu_t m_parent;
    char is_a_legend;
} koala_t;

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend);
static void cthulhu_initializer(cthulhu_t *this);
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void eat(koala_t *this);
void sleeping(cthulhu_t *this);