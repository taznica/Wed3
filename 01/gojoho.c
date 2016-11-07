#include <stdio.h>

int count = 0;

void sort(int x, int y){
    int p = 0;
    if(x < y){
        p = x;
        x = y;
        y = p;
    }
}

int gojoho(int x, int y){
    int p = 0;
    sort(x, y);
    while(y != 0){
        p = x;
        x = y;
        y = p % y;
        count += 1;
    }
    return x;
}

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);

    c = gojoho(a, b);

    printf("Answer is %d, count is %d", c, count);
}
