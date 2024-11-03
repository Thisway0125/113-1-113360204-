#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);
int lcm(int, int);

int main(void)
{
    int num1, num2;
    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("The least common multiple is: %d\n", lcm(num1, num2));
	system("pause");
	return 0;
}

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}