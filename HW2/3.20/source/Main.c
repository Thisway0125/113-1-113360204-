#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hours;
    float hourly_rate;
    float gross_pay;

    gross_pay = 0;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    
    while(hours != -1)
    {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);

        if (hours <= 40)
        {
            gross_pay = hours * hourly_rate;
        }
        else
            gross_pay = 40 * hourly_rate + (hours - 40) * hourly_rate * 1.5;

        printf("Salary is $%.2f\n", gross_pay);
        printf("\n");

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);
    }

    system("pause");
    return 0;
}