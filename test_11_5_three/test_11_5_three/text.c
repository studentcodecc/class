/**********************************����ѧ���ķ�����Χ�����ѧ���ĵȼ�******************************/
#define _CRT_SECURE_NO_WARNINGS//ͬ������Ϊ��������ԭ����������д����ֹscanf��������
#include<stdio.h>
int main()
{
	int score;
	printf("��������ĳɼ�");
	scanf("%d",&score);
	switch(score/10)
	{
	case 10:printf("��ĵȼ�ΪA");break;
	case 9:printf("��ĵȼ�ΪA");break;
	case 8:printf("��ĵȼ�ΪB");break;
	case 7:printf("��ĵȼ�ΪC");break;
	case 6:printf("��ĵȼ�ΪD");break;
	case 5:printf("��ĵȼ�ΪE");break;
	default:printf("��ĵȼ���E�ȼ�֮��");
	}
	return 0;
}