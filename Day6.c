#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		//cplusplus学习库函数		

int main(void)
{
	
	return 0;
}


//#include <math.h>
//int main(void)		//判断0-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 200; i++)
//	{
//		int x = 0;
//		for (x = 2; x <= sqrt(i); x ++)
//		{
//			if (i % x == 0)
//				break;
//		}
//		if (x > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int main(void)	//判断0-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 200; i++)
//	{
//		int x = 0;
//		for (x = 2; x < i; x++)
//		{
//			if (i % x == 0)
//				break;
//		}
//		if (x == i) 
//		{
//		count++;
//		printf("%d ", i);
//		}	
//	}
//	printf("\n素数个数：%d", count);
//	return 0;
//}


//int main(void)	//打印1000-200年的闰年
//{
//	//闰年条件 能被4整除不能被100整除
//	//能被400整除
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}	*/
//	}
//	printf("\n闰年个数=%d", count);
//	return 0;
//}