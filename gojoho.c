#include <stdio.h>

int gojoho(int x, int y){
    int p = 0;
    while(y != 0){
        p = x;
        x = y;
        y = p % y;
    }
    return x;
}

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);

    c = gojoho(a, b);

    printf("Answer is %d", c);
}
