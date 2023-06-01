#include <stdio.h>

char* join(char* words[], int n){
    char *str = malloc(255);//выделяем память 255
    for(int i = 0; i < n - 1; i++){
        strcat(str, words[i]); //записываем слово
        strcat(str, " ");//записываем пробел
    }
    strcat(str, words[n - 1]); //выводим строчку и последнее слово
    return str;
}

int main(){
    char* words[4] = {"My", "name", "is", "Nika"};
    printf("%s ", join(words, 4));
}