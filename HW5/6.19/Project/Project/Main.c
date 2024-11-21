#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    const int SIDES = 6;        
    const int ROLLS = 36000;   
    int results[13] = { 0 };     

    srand((unsigned int)time(NULL));

    for (int i = 0; i < ROLLS; ++i)
    {
        int die1 = rand() % SIDES + 1; 
        int die2 = rand() % SIDES + 1; 
        int sum = die1 + die2;        
        results[sum]++;               
    }

    printf("�I��\t�X�{����\t�ʤ���\n");
    for (int i = 2; i <= 12; ++i) 
    {
        double percentage = (double)results[i] / ROLLS * 100; 
        printf("%d\t%d\t\t%.2f%%\n", i, results[i], percentage);
    }

    printf("\n�z�׾��v�ˬd:\n");
    printf("7�I�X�{�����Ʋz�׭������� %d (%.2f%%)�A��ڦ��Ƭ� %d\n",
        ROLLS / 6, (1.0 / 6.0) * 100, results[7]);

    system("pause");
    return 0;
}
