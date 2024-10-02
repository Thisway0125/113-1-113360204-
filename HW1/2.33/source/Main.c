// (Car-Pool Savings Calculator) 程式
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float total_distance;
	float gas_money;
	float kilometer_per_liter;
	int parking_fee;
	int tolls;
	int total_cost;

	printf("請輸入 一天的總里程數 (單位:公里): ");
	scanf("%f", &total_distance);

	printf("請輸入 汽油一公升的價格: ");
	scanf("%f", &gas_money);

	printf("請輸入 平均一公升能行駛多少公里: ");
	scanf("%f", &kilometer_per_liter);

	printf("請輸入 一天的停車費: ");
	scanf("%d", &parking_fee);

	printf("請輸入 一天的通行費 (過路費): ");
	scanf("%d", &tolls);

	printf("\n");

	/*
		計算開車一整天總共消費方法：
		(1) 將 總里程數(Km) / 每公升能行駛多少公里 (Km/L) 計算出一天開車消耗幾公升汽油
		(2) 將 計算出來的 汽油公升數 * 每公升汽油價格 得出 開車所消耗汽油的價錢
		(3) 將 所消耗汽油的價錢 + 一天的停車費 + 一天的通行費 得出 開車一天總共花費 (+ 0.5是為了將金額做 四捨五入 的運算)
	*/
	total_cost = (total_distance / kilometer_per_liter) * gas_money + parking_fee + tolls + 0.5;
	printf("開車一天總共花費: %d 元\n", total_cost);

	system("pause");
	return 0;
}