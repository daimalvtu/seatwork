#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a ;
	printf("������һ����\n");
	scanf("%d", &a);

	if (a % 2 == 1)
		printf("��������\n");
	else 
		printf("�ⲻ������\n");

	return 0;
}