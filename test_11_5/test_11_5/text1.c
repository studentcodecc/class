/**********************************����1-100�ĺ���ѭ��ʵ��,��������Կ���num�ı仯���*************/
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
		printf("num��ֵΪ%d\n", num);
		Sleep(500);
	}
	printf("1-100�ĺ�Ϊ%d\n", num);
	return 0;
}