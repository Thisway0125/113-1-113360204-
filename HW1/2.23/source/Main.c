#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int largest_num; 
	int smallest_num;

	printf("請輸入 第一個 整數: ");
	scanf("%d", &num1);

	printf("請輸入 第二個 整數: ");
	scanf("%d", &num2);

	printf("請輸入 第三個 整數: ");
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

	printf("最大的整數是 %d\n", largest_num);
	printf("最小的整數是 %d\n", smallest_num);

	system("pause");
	return 0;
}