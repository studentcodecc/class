/**********************************输入学生的分数范围，输出学生的等级******************************/
#define _CRT_SECURE_NO_WARNINGS//同样的因为编译器的原因加入了这行代码防止scanf函数报错
#include<stdio.h>
int main()
{
	int score;
	printf("请输入你的成绩");
	scanf("%d",&score);
	switch(score/10)
	{
	case 10:printf("你的等级为A");break;
	case 9:printf("你的等级为A");break;
	case 8:printf("你的等级为B");break;
	case 7:printf("你的等级为C");break;
	case 6:printf("你的等级为D");break;
	case 5:printf("你的等级为E");break;
	default:printf("你的等级在E等级之下");
	}
	return 0;
}