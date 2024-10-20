#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if((i == 0) || (i == 2) || (j == 0) || (j == 11))
				printf("%c", sign);
			else
				printf("%c", sign2);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}