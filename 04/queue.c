#include <stdio.h>
#include <stdlib.h>

struct cell {
    int element;
    struct cell *next;
};

struct cell *enq(int x, struct cell *top, struct cell *bottom) {
    struct cell *new;
    new = (struct cell *)malloc(sizeof(struct cell));

    new->element = x;
    new->next = NULL;
    bottom->next = new;
    bottom = new;

    return(bottom);
}

int deq(struct cell *top, struct cell *bottom) {
    struct cell *old;
    int x;

    if(top==NULL) {
        puts("ERROR: Queue is empty.");
        return(-1);
    }

    old = top;
    top = top->next;
    x = old->element;
    free(old);

    printf("%d\n", x);

    return x;
}

int main(void) {
    struct cell *top, *bottom;
    top = (struct cell *)malloc(sizeof(struct cell));
    bottom = (struct cell *)malloc(sizeof(struct cell));

    top->element = 0;
    top->next = bottom;
    bottom->element = 0;
    bottom->next = NULL;
    top = bottom;

    enq(1, top, bottom);
    deq(top, bottom);
    enq(2, top, bottom);
    enq(3, top, bottom);
    deq(top, bottom);
    enq(4, top, bottom);
    deq(top, bottom);
    deq(top, bottom);
    deq(top, bottom);
}
