
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);

	printf("\n");

	if (num % 2 == 0)
	{
		printf("%d �O����\n", num);
	}
	else
	{
		printf("%d �O�_��\n", num);
	}

	system("pause");
	return 0;
}