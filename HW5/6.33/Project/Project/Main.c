#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int startIndex, int endIndex, int key);

int main() 
{
    int array[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    int arraySize = sizeof(array) / sizeof(array[0]); 
    int key;

    printf("��J�n�j�M���ƭ�: ");
    scanf("%d", &key);

    int result = binarySearch(array, 0, arraySize - 1, key);

    if (result != -1) {
        printf("���ƭ� %d�A������ %d\n", key, result);
    }
    else {
        printf("�ƭ� %d ���b�}�C�����\n", key);
    }

    system("pause");
    return 0;
}

int binarySearch(int array[], int startIndex, int endIndex, int key) 
{
    if (startIndex > endIndex)
    {
        return -1;
    }

    int midIndex = startIndex + (endIndex - startIndex) / 2;

    if (array[midIndex] == key)
    {
        return midIndex;
    }
    else if (array[midIndex] > key)
    {
        return binarySearch(array, startIndex, midIndex - 1, key);
    }
    else
    {
        return binarySearch(array, midIndex + 1, endIndex, key);
    }
}