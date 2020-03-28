//conditions and relational operators

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for x
    int x = get_int("Please provide value for x : \n");

    //prompt user for  y
    int y = get_int("Please provide value for y : \n");

    //x and y comparison
    if (x > y)
    {
        printf("%i is bigger than %i\n", x, y);
    }
    else if (x < y)
    {
        printf("%i is bigger than %i\n", y, x);
    }
    else
    {
        printf("%i is equal to %i\n", x, y);
    }
}