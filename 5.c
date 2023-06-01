#include <stdio.h>

int ispolnitel(int num) {
    int per1 = num / 100; // первая цифра
    int per2 = (num / 10) % 10; // вторая цифра
    int per3 = num % 10; // третья цифра
   int s1, s2; // умножаем)))
    s1 = per1 * per2;
    s2 = per2 * per3;
    int res; // ЕСЛИ С1 БОЛЬШЕ 10 - ВЫВОДИМ ЧЕТЫРЕХЗНАЧНОЕ ЧИСЛО 
    if (s2 >= s1) {
        res = s2 * 100 + s1;
        if (s1 < 10) {
            res = s2 * 10 + s1;
        }
    }else {//  ЕСЛИ С2 БОЛЬШЕ С1 то выведем делаем все также 
        res = s1 * 100 + s2;
        if (s2 < 10) {
            res = s1 * 10 + s2;
        }
    }
    return res;
}

int main() {
    int num;
    scanf("%d", &num);
    int a = ispolnitel(num);
    printf("%d", a);

    return 0;
}