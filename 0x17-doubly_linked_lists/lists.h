#ifndef LISTS_H_
#define LISTS_H_
/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structures */

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* functions */

size_t dlistint_len(const dlistint_t *h);
#endif