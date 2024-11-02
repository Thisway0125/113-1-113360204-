#include <stdio.h>
#include <stdlib.h>

int main()
{
	int   account_number;   // 客戶銀行帳號
	float beginnig_balance; // 客戶金融卡這個月初始餘額
	float total_charged;    // 客戶這個月消費總額
	float total_credits;    // 客戶這個月入帳總額
	float credit_limit;     // 銀行允許借用金額的限制
	float new_balance;      // 儲存金融卡新餘額

	while (1)
	{
		printf("Enter account number (-1 to end): "); // 輸入銀行帳號
		scanf("%d", &account_number);

		if (account_number == -1) // 帳號輸入為-1時，退出計算程式
			break;

		printf("Enter beginning balance: "); // 輸入這個月初始餘額
		scanf("%f", &beginnig_balance);
		printf("Enter total charges: ");     // 輸入這個月消費總額
		scanf("%f", &total_charged);
		printf("Enter total credits: ");     // 輸入這個月入帳總額
		scanf("%f", &total_credits);
		printf("Enter credit limit: ");      // 輸入銀行允許借用金額的限制
		scanf("%f", &credit_limit);

		/*
			計算金融卡新餘額:
			新餘額 = 初始餘額 + 消費總額 - 入帳總額
		*/
		new_balance = beginnig_balance + total_charged - total_credits;

		if (new_balance > beginnig_balance) // 判斷新餘額是否超過舊餘額
			printf("Account:      %d\n", account_number); // 顯示銀行帳號
		printf("Credit limit: %.2f\n", credit_limit); // 顯示金融卡額度限制
		printf("Balance:      %.2f\n", new_balance);  // 顯示金融卡新餘額
		printf("Credit Limit Exceeded.\n");

		printf("\n");
	}

	system("pause");
	return 0;
}