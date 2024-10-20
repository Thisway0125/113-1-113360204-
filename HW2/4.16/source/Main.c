#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
	int temp;

	printf("(A)\n");

	temp = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i <= temp) && (j <= temp))
			{
				printf("%c", sign);
			}
			else
				printf("%c", sign2);
		}
		
		temp++;
		printf("\n");
	}

	printf("(B)\n");

	temp = 0;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 9; j >= 0; j--)
		{
			if ((i >= temp) && (j >= temp))
			{
				printf("%c", sign);
			}
			else
				printf("%c", sign2);
		}

		temp++;
		printf("\n");
	}

	printf("(C)\n");

	temp = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i >= temp) && (j >= temp))
			{
				printf("%c", sign);
			}
			else
				printf("%c", sign2);
		}

		temp++;
		printf("\n");
	}
	printf("(D)\n");

	temp = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 9; j >= 0; j--)
		{
			if ((i <= temp) && (j <= temp))
			{
				printf("%c", sign);
			}
			else
				printf("%c", sign2);
		}

		temp++;
		printf("\n");
	}

	system("pause");
	return 0;
}