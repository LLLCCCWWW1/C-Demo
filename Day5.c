#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)	//辗转相除法求两个数的最大公约数
{
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	while (temp= a % b)
	{
		a = b;
		b = temp;
	}
	printf("最大公约数：%d", b);
	return 0;
}


//int main()//	比较三个数 按大到小排序输出
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//#include "string.h"
//int main(void)
//{
//	int i = 0;
//	int PassWord[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", PassWord);
//		if (strcmp(PassWord,"123456") == 0)  //判断字符串相等不能直接用== 要用库函数strcmp
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("三次密码错误，请退出！");
//		}
//	}
//	return 0;
//}


//#include <Windows.h>
//#include <string.h>
//int main(void)
//{
//	char arr1[] = "Welcome to China!";
//	char arr2[] = "******* ** ******";
//	int Left = 0;
//	//int Riht = sizeof(arr1) / sizeof(arr1[0]) - 2;	//字符串数组最后还有\0
//	int Right = strlen(arr1) - 1;
//	while (Left<=Right) 
// {
//	arr2[Left] = arr1[Left];
//	arr2[Right] = arr1[Right];
//	printf("%s\n",arr2);
//	Sleep(500); //延时 需要Windowns库
//	Left++;
//	Right--;
//	}
//	return 0;
//}


//int main(void)	//有序数组利用二分法寻找元素
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int Left = 0; //左下标
//	int Sz = sizeof(arr) / sizeof(arr[0]);	//数组个数
//	int Input = 0;
//	int Right = Sz - 1;//右下标
//	printf("请输入一个数：");
//	scanf("%d", &Input);
//	while (Left<= Right){
//		int Mid = (Left + Right) / 2;
//		if (arr[Mid] > Input) {
//			Right =  Mid - 1;
//		}
//		else if (arr[Mid] < Input) {
//			Left = Mid + 1;
//		}
//		else {
//			printf("找到了:%d\n", Input);
//			break;
//		}
//		if (Left > Right)
//		{
//			printf("没找到\n");
//		}
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("请输入一个数：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("在数组中找到了输入的元素，其下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("没有找到");
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int z = 1;
//	int x = 1;
//	int n = 0;
//	printf("请输入一个数:");
//	scanf("%d", &z);
//	for (i = 1; i <= z; i++) {
//		x *= i;
//		n += x;}
//	printf("阶乘为：%d", n);
//	return 0;
//}


//int main(void)
//{
//	int i = 0;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}