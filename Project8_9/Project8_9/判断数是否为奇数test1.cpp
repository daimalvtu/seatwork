#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a ;
	printf("请输入一个数\n");
	scanf("%d", &a);

	if (a % 2 == 1)
		printf("这是奇数\n");
	else 
		printf("这不是奇数\n");

	return 0;
}