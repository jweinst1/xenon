#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stdlib.h>

//basic allocation functions

void* allo_of_block(size_t block, int amount);

void* allo_of_code(char code, int amount);

void* allo_of_size(size_t block);

//specialized allocators
//_s is a single spaces
//_m is multiple spaces or [array]

int* allo_int_s();

int* allo_int_m(int amount);

char* allo_char_s();

char* allo_char_m(int amount);

//basic deallocation

void allo_delete(void* pnt);

#endif