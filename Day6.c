#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		//cplusplusѧϰ�⺯��		

int main(void)
{
	
	return 0;
}


//#include <math.h>
//int main(void)		//�ж�0-200֮�������
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


//int main(void)	//�ж�0-200֮�������
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
//	printf("\n����������%d", count);
//	return 0;
//}


//int main(void)	//��ӡ1000-200�������
//{
//	//�������� �ܱ�4�������ܱ�100����
//	//�ܱ�400����
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
//	printf("\n�������=%d", count);
//	return 0;
//}