#include <stdio.h>

struct cell {
    int element;
    struct cell *next;
}

struct cell *enq(int x, struct cell *top) {
    struct cell *old, *new;
    new = (struct cell *)malloc(sizeof(struct cell));

    old = top;
    top = new;

    new->element = x;
    new->next = old;

    return(top);
}
