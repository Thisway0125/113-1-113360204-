#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int array[], int size);

int main() 
{
    int array[] = { 3, 5, 1, 8, 2, 10, 4 }; 
    int size = sizeof(array) / sizeof(array[0]);

    int maxValue = recursiveMaximum(array, size);

    printf("陣列中的最大值為: %d\n", maxValue);

    system("pause");
    return 0;
}

int recursiveMaximum(int array[], int size)
{
    if (size == 1)
    {
        return array[0];
    }

    int maxOfRest = recursiveMaximum(array, size - 1);

    if (array[size - 1] > maxOfRest)
    {
        return array[size - 1];
    }
    else
    {
        return maxOfRest;
    }
}
