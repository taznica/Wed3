#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef long ELEM;

#define QUEUE_SIZE 100

ELEM queue[QUEUE_SIZE];
int front, rear;

#define next(a) (((a) + 1) % QUEUE_SIZE)

void error(char *s) {
    fprintf(stderr, s);
    exit(1);
}

void init() {
    front = 0;
    rear = 0;
}

void enq(ELEM x) {
    if(next(rear) == front) {
        error("ERROR: Queue is full.\n");
    }
    queue[rear] = x;
    rear = next(rear);
}

ELEM deq() {
    ELEM x;
    if(front == rear) {
        error("ERROR: Queue is empty.\n");
    }
    x = queue[front];
    front = next(front);
    return x;
}

int empty() {
    return front == rear;
}

int main(void) {
    int x;

    init();

    enq(1);
    x = deq();
    printf("%d\n", x);
    enq(2);
    enq(3);
    x = deq();
    printf("%d\n", x);
    enq(4);
    x = deq();
    printf("%d\n", x);
    x = deq();
    printf("%d\n", x);
    x = deq();
    printf("%d\n", x);
}
