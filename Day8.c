#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 

void BiuBiu_Sort(int arr[], int sz)		//√∞≈›≈≈–Ú
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{  

				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main(void)
{
	int arr[10] ;
	printf("«Î ‰»Î10∏ˆ ˝£∫\n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
											&arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	BiuBiu_Sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
