#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
int main()
{
	char arr1[] = "welcome to my home!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("#####################\n");
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}

	return 0;
}
