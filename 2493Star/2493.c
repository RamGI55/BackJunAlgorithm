#include <stdio.h>


int main (void)
{
    // Promote the userfor the pyramid's height
    int height, row, column, space;
    do
    {
        scanf_s("%d", &height); 

    }
    while(height < 1 || height > 100);


    // Print a pyramid of that height
    for (row = 0; row<height; row++)
    {
        for (space = 0; space < height - row -1 ; space ++)
        {
            printf(" ");
        }
        for (column = 0; column < row +1 ; column++)
        {
            printf("*");
        }
       printf("\n");

    }
}