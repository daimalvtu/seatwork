#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 8,6,5,4,1 };
	int se=sizeof(arr) / sizeof(arr[0])-1;
	int i = 0;
	for (i = 0; i <= se; i++,se--)
	{
		int temp = arr[i];
		arr[i] = arr[se];
		arr[se] = temp;
	}
	 se = sizeof(arr) / sizeof(arr[0]) - 1;
	int j = 0;
	for (j = 0; j <=se; j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
 }