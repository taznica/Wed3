#include <stdio.h>

int count = 0;

int sirami(int x, int y){
    int z = y;
    while(x % z != 0 || y % z != 0){
        z -= 1;
        count += 1;
    }
    return z;
}

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);

    c = sirami(a, b);

    printf("Answer is %d, count is %d", c, count);
}
