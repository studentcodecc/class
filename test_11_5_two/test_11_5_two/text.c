/****************************************输入学生的成绩等级，输出等级的分数范围******//////////////////////////
#define _CRT_SECURE_NO_WARNINGS//由于编译器的原因加入了这行代码，大家在使用vc2010学习版本时无需加
#include<stdio.h>
int main()
{
	char score;
	printf("请输入学生成绩等级为\n");
	scanf("%c",&score);
	switch(score)
	{
	case'A':printf("你的成绩在90-100之间");break;
	case'B':printf("你的成绩在80-89之间");break;
	case'C':printf("你的成绩在70-79之间");break;
	case'D':printf("你的成绩在60-69之间");break;
	case'E':printf("你的成绩在60以下");break;
	default:printf("请重新输入");
	}
	return 0;
}