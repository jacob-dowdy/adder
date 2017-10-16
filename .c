#include <stdio.h>
#include <cs50.hi>

int main(void) 
{
    printf("x is ");
    int x = get_int();
    
    printf("y is ");
    int y = get_int();
    
    printf("The sum of x and y is %i\n", x + y);
}
