#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    while (accountNumber != -1)
    {
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f", &totalCharges);

        printf("Enter total credits: ");
        scanf("%f", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        if (newBalance > creditLimit) {
            printf("Account: %d\n", accountNumber);
            printf("Credit limit: %.2lf\n", creditLimit);
            printf("Balance: %.2lf\n", newBalance);
            printf("Credit limit exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }

    system("pause");
    return 0;
}