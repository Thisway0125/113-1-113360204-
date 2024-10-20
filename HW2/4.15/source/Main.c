#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double principal = 5000.0;  
    int years = 15;              
    double rate;                 
    double amount;               

    for (rate = 10.0; rate <= 12.0; rate += 0.5) 
    {
        printf("Interest Rate: %.1f%%\n", rate);
        printf("Year\tAmount\n");

        for (int year = 1; year <= years; year++) 
        {
            amount = principal; 

            for (int i = 0; i < year; i++) 
            {
                amount += amount * (rate / 100);
            }

            printf("%d\t%.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}