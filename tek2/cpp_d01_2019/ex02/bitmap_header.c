/*
** EPITECH PROJECT, 2020
** bit_map_header
** File description:
** bit_map_header.c
*/

#include "bitmap.h"

void make_bmp_header(t_bmp_header *header, size_t size)
{
    header->magic = 0x4D42;
    header->size = size * size * 4 + 54;
    header->_app1 = 0x0000;
    header->_app2 = 0x0000;
    header->offset = (sizeof t_bmp_header) * 2;
}

void make_bmp_info_header(t_bmp_info_header *header, size_t size)
{
    header->size = 40;
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->raw_data_size = size * size * 4;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_colors = 0;
}
