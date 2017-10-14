#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("x is ");
    int x = get_int();
    
    printf("y is ");
    int y = get_int();
    
    int z = x + y;
    
    printf("The sum of x and y is %i\n", z);
}
