#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int largest_num; 
	int smallest_num;

	printf("�п�J �Ĥ@�� ���: ");
	scanf("%d", &num1);

	printf("�п�J �ĤG�� ���: ");
	scanf("%d", &num2);

	printf("�п�J �ĤT�� ���: ");
	scanf("%d", &num3);

	if ((num1 > num2) && (num2 > num3))
	{
		largest_num = num1;
		smallest_num = num3;
	}
	
	else if ((num1 > num3) && (num3 > num2))
	{
		largest_num = num1;
		smallest_num = num2;
	}

	if ((num2 > num1) && (num1 > num3))
	{
		largest_num = num2;
		smallest_num = num3;
	}
	
	else if ((num2 > num3) && (num3 > num1))
	{
		largest_num = num2;
		smallest_num = num1;
	}

	
	if ((num3 > num1) && (num1 > num2))
	{
		largest_num = num3;
		smallest_num = num2;
	}

	else if ((num3 > num2) && (num2 > num1))
	{
		largest_num = num3;
		smallest_num = num1;
	}

	printf("\n");

	printf("�̤j����ƬO %d\n", largest_num);
	printf("�̤p����ƬO %d\n", smallest_num);

	system("pause");
	return 0;
}