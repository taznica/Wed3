#include <stdio.h>

struct cell {
    int element;
    struct cell *next;
}

struct cell *push(int x, struct cell *pop) {
    struct cell *old, *new;
    new = (struct cell *)malloc(sizeof(struct cell));

    old = top;
    top = new;

    new->element = x;
    new->next = old;

    return(top); 
}

struct cell *pop(struct cell *top) {
    struct cell *old;

    if(top != NULL) {
        old = top;
        top = top->next;
        free(old);
        return(top);
    }
    else {
        puts("Error: Empty stack.");
        exit(1);
    }
    return;
}

int main() {

}
