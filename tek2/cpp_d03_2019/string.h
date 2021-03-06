/*
** EPITECH PROJECT, 2020
** string
** File description:
** string.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct string_s {
    char *str;
} string_t;

void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
char at(const string_t *this, size_t pos);
void clear(string_t *this);
int size(const string_t *this);
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);
void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
