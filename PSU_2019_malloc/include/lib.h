/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** lib
*/

#ifndef LIB_H_
#define LIB_H_

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct block_s block_t;

struct block_s {
    block_t *next;
    block_t *previous;
    bool free;
    size_t position;
    void *address;
} ;

block_t *find_block(const size_t size, block_t *block);
block_t *find_block_equal(block_t *block, void *ptr);
void copy_block(block_t *dest, block_t *src);
void free(void *ptr);
block_t *free_b(block_t *block);
block_t *create_block(const size_t size, block_t *block);
void *create_memory_block(size_t size);
block_t *free_block(block_t *block);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);
void show_alloc_mem(void);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

#endif /* !LIB_H_ */