#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float sales, earn;

    earn = 0;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales != -1) 
    {
        earn = 200 + 0.09 * sales;

        printf("Salary is: $%.2lf\n", earn);

        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }

    system("pause");
    return 0;
}