/****************************************����ѧ���ĳɼ��ȼ�������ȼ��ķ�����Χ******//////////////////////////
#define _CRT_SECURE_NO_WARNINGS//���ڱ�������ԭ����������д��룬�����ʹ��vc2010ѧϰ�汾ʱ�����
#include<stdio.h>
int main()
{
	char score;
	printf("������ѧ���ɼ��ȼ�Ϊ\n");
	scanf("%c",&score);
	switch(score)
	{
	case'A':printf("��ĳɼ���90-100֮��");break;
	case'B':printf("��ĳɼ���80-89֮��");break;
	case'C':printf("��ĳɼ���70-79֮��");break;
	case'D':printf("��ĳɼ���60-69֮��");break;
	case'E':printf("��ĳɼ���60����");break;
	default:printf("����������");
	}
	return 0;
}