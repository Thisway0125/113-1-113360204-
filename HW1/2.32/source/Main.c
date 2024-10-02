
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height;
	float weight;
	float BMI_result = 0;

	printf("請輸入身高 (單位:公尺): ");
	scanf("%f", &height);

	printf("請輸入體重 (單位:公斤): ");
	scanf("%f", &weight);

	BMI_result = weight / (height * height);

	printf("\n");

	printf("BMI 數值: %.1f \n", BMI_result);

	if (BMI_result < 18.5)
		printf("過輕: 低於 18.5\n");
	else if (BMI_result < 25)
		printf("正常: 18.5 與 24.9 之間\n");
	else if (BMI_result < 30)
		printf("過重: 25 與 29.9 之間\n");
	else
		printf("肥胖: 大於等於 30\n");

	printf("\n");

	system("pause");
	return 0;
}