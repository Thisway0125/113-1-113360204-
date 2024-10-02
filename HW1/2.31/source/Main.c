
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%-8s%-8s%-8s\n", "number", "square", "cube"); 

	for (int i = 0; i <= 10; i++)
	{
		int num;		
		int square_num;
		int cube_num;	

		num = i;
		square_num = i * i;
		cube_num = i * i * i;

		printf("%-8d", num);		
		printf("%-8d", square_num);
		printf("%-8d\n", cube_num);
	}

	system("pause");
	return 0;
}