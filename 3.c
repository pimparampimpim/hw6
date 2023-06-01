#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;

    int f2 = 0; // F(n-2)
    int f1 = 1; // F(n-1)
    int f = 0; // F(n)

    for (int i = 2; i <= n; i++) {
        // вычисляем и "перемещаем" переменные по очереди
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    return f;
}

int main() {
    int n;
    scanf("%d", &n);
    int a = fibonacci(n);
    printf("%d", a);
    return 0;
}