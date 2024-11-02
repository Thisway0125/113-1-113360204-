#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(void)
{
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d to the %dth power is: %d\n", base, exponent, power(base, exponent));
	
    system("pause");
	return 0;
}

int power(int base, int exponent) 
{
    if (exponent == 1) 
    {
        return base;
    }
    else 
    {
        return base * power(base, exponent - 1);
    }
}