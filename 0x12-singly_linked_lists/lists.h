#ifndef _LIST_HEADER_
#define _LIST_HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_s - singly linked list
 * @str: malloc string
 * @length: string length
 * @nxt: pointer to the next sring
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
