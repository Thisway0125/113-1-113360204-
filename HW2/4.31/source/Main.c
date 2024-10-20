
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int temp= 5;  
    int i, j;

    for (i = 1; i <= temp; i++) 
    {
        for (j = 1; j <= temp - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = temp - 1; i >= 1; i--) 
    {
        for (j = 1; j <= temp - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}