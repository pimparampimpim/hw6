#include <stdio.h>

int sumDigits(int *num) {
    int number = *num;
    int sum = 0;

    while (number != 0) {
        sum += number % 10; // получаем последнюю цифру числа и добавляем к сумме
        number /= 10; // удаляем последнюю цифру числа
    }
    return sum;
}

int main() {
    int num;
    scanf("%d", &num);
    int a = sumDigits(&num);
    printf("%d", a);
    return 0;
}