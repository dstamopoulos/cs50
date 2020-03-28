#include <stdio.h>

int main()
{
    char answer[25];
    printf("What is your name? : ");
    scanf("%s", answer);
    printf("Hello %s.\n", answer);
}