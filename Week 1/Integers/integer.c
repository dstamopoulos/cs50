#include <stdio.h>

int main(void)
{
    int age;
    printf("What is your age? : ");
    scanf("%i", &age);
    //int days = age * 365; another way to do it as well
    printf("Your age in days is: %i\n", age * 365);
}