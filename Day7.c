#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
  

int main(void)
{
	
	return 0;
}
  

//int Fac(int x)	//递归求阶乘
//{
//	if (x > 1)
//	{
//		return x *Fac(x-1);
//	}
//	else
//		return 1;
//}
//
//int main(void)
//{
//	int Num = 0;
//	scanf("%d", &Num);
//	printf("%d", Fac(Num));
//	return 0;
//}


//int my_strlen(char* p)	//递归求字符串长度
//{
//	if (*p != '\0')
//		return 1+my_strlen(p + 1);
//	else
//		return 0;
//}
//
//int main(void)
//{
//	char arr[] = "hello";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//void prt(int n)
//{
//	if (n > 9)
//		prt(n/10);
//	printf("%d ", n % 10);
//}
//
//int main(void)
//{
//	unsigned int Num = 0;
//	scanf("%d", &Num);
//	prt(Num);
//	//printf("haha\n");
//	//main();
//	//printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}




//#include <math.h>
//int Is_Prime(in  t n)	//判断是否为素数
//{
//	int x = 0;
//	for (x = 2; x < sqrt(n); x++)
//	{
//		if (n % x == 0)
//		{
//			return 0;
//		}	
//	}
//	return 1;
//}
//
//int Is_Year(int year)		//判断年份是否是闰年
//{
//	if (year % 4 ==0 && year % 100!=0 || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int Find_Num(int arr[], int Num, int size)	//有序数组二分法查找元素
//{
//	int left = 0;
//	int right = size-1;
//	
//	while (left <= right)
//	{
//		int mid = (left+ right)/2;
//		if (arr[mid] < Num)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > Num)
//		{
//			right = mid-1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//void add(int* p)
//{
//	//*p += 1;
//	(*p)++;		//++优先级大于*
//}
//
//int main(void)
//{
//	int num = 0;
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return;
//}


//int main(void)
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	printf("请输入要查找的数字：");
//	scanf("%d", &num);
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int rec = Find_Num(arr, num, sz);
//	if (rec == -1)
//	{
//		printf("没有找到要查找的数字");
//	}
//	else
//		printf("找了的要查找的数字:%d,下标是%d", num,rec);
//	return 0;
//}


//int main(void)
//{
//	int year = 0;
//	printf("请输入一个年份：");
//	scanf("%d", &year);
//	if (Is_Year(year) == 1)
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}


//int main(void)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < +200; i++)
//	{
//		if (Is_Prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}