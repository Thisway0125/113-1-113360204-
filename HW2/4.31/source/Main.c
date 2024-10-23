#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Max = 5;
	int Min = 5;

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if ((j >= Min) && (j <= Max))
				printf("*");
			else
				printf(" ");
		}

		if (i < 5)
		{
			Max++; Min--;
		}
		else
		{
			Max--;Min++;
		}

		printf("\n");
	}

	system("pause");
	return 0;
}
