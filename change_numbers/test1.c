#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[100];
	int i, a,sz;
	scanf("%d",&sz);   //确定有多少个数字
	int arr1[100];
	int arr2[100];
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
		arr1[i] = 0;
		arr2[i] = 0;
	}
	int j = 0;
	int m = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[j] = arr[i];
			j++;
		}
		else
		{
			arr2[m] = arr[i];
			m++;
		}
	}
	for (i = 0; i < j; i++)
	{
		arr[i] = arr1[i];
	}
	for (i = j, a = 0; i < j + m, a < m; i++, a++)
	{
		arr[i] = arr2[a];
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
