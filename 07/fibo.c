#include <stdio.h>

int plus1 = 0;
int plus2 = 0;

int f[20] = {0};

int saiki(int n) {
    if(n == 0 || n == 1) {
        return n;
    }

    plus1++;
    return saiki(n - 1) + saiki(n - 2);

}

int memo(int n) {
    if(n == 0 || n == 1) {
        return n;
    }

    if(f[n] != 0) {
        return f[n];
    }
    else {
        plus2++;
        return f[n] = memo(n - 1) + memo(n - 2);
    }
}

int main() {
    printf("再帰のみ: %d, %d回\n", saiki(20), plus1);
    printf("メモ化: %d, %d回\n", memo(20), plus2);
    return 0;
}
