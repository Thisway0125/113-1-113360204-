#include <stdio.h>
#include <stdlib.h>

int main() {
    int payCode;
    double weeklyPay = 0.0;

    printf("Enter employee's paycode (1=Manager, 2=Hourly worker, 3=Commission worker, 4=Pieceworker): ");
    scanf("%d", &payCode);

    switch (payCode) 
    {
    case 1: 
    {
        double salary;
        printf("Enter manager's weekly salary: ");
        scanf("%lf", &salary);
        weeklyPay = salary;
        break;
    }
    case 2: 
    {
        double hourlyWage;
        int hoursWorked;
        printf("Enter hourly worker's wage: ");
        scanf("%lf", &hourlyWage);
        printf("Enter hours worked: ");
        scanf("%d", &hoursWorked);

        if (hoursWorked <= 40) 
        {
            weeklyPay = hourlyWage * hoursWorked;
        }
        else 
        {
            weeklyPay = hourlyWage * 40 + (hoursWorked - 40) * hourlyWage * 1.5;
        }
        break;
    }
    case 3: 
    {
        double weeklySales;
        printf("Enter commission worker's gross weekly sales: ");
        scanf("%lf", &weeklySales);
        weeklyPay = 250 + (weeklySales * 0.057);
        break;
    }
    case 4: 
    { 
        double payPerItem;
        int itemsProduced;
        printf("Enter pay per item: ");
        scanf("%lf", &payPerItem);
        printf("Enter number of items produced: ");
        scanf("%d", &itemsProduced);
        weeklyPay = payPerItem * itemsProduced;
        break;
    }
    default:
        printf("Invalid paycode.\n");
        return 1;
    }

    printf("The weekly pay is: $%.2f\n", weeklyPay);
    system("pause");
    return 0;
}