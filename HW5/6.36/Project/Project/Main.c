#include <stdio.h>
#include <stdlib.h>

void stringReverse(char str[], int index);

int main() 
{
    char str[100]; 
    printf("��J�@�Ӧr��: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; ++i) 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }
    }

    printf("�r�ꪺ�ϦV�C�L��: ");
    stringReverse(str, 0);
    printf("\n");

    system("pause");
    return 0;
}

void stringReverse(char str[], int index)
{
    if (str[index] == '\0')
    {
        return;
    }

    stringReverse(str, index + 1);

    putchar(str[index]);
}
