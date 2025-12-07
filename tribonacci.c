#include <stdio.h>
int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int a = 0;
    int b = 1;
    int c = 1;
    int d;

    for (int i = 3; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }

    return c;
}

int main() {
    printf("%d\n", tribonacci(4));
    printf("%d\n", tribonacci(25));
    return 0;
}
