#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 0;
	int c = 0;
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
				c += arr[i][j];
		}
	}
	printf("\n主对角元素之和等于：%d",c);
	return 0;
}