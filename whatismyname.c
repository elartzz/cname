#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %sYou are %d years old.\n", name, age);

    return 0;
}