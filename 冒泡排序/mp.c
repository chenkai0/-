#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int y = 0;//”≈ªØ≥Ã–Ú
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = 0;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				y = 1;
			}
		}
		if (y == 0)
		{
			break;
		}
			
	}
}

int main()
{
	int arr[] = { 9,8,7,6,10,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}