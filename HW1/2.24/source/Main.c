
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("叫块俱计: ");
	scanf("%d", &num);

	printf("\n");

	if (num % 2 == 0)
	{
		printf("%d 琌案计\n", num);
	}
	else
	{
		printf("%d 琌计\n", num);
	}

	system("pause");
	return 0;
}