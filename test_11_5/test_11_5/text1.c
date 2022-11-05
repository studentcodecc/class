/**********************************计算1-100的和用循环实现,本程序可以看出num的变化情况*************/
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int num, i;
	num = 0;
	i = 0;
	system("color 0a");
	while (i <= 100)
	{
		num += i;
		i++;
		system("cls");
		printf("num的值为%d\n", num);
		Sleep(500);
	}
	printf("1-100的和为%d\n", num);
	return 0;
}