#include <stdio.h>
#include <stdlib.h>

char changeCase(char);

int main(void)
{
    char ch;
    printf("Enter a alphabet: ");
    scanf("%c", &ch);

    changeCase(ch);
    printf("Changed alphabet: %c\n", ch);

}

char changeCase(char ch) 
{
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    else {
        return ch; 
    }
}