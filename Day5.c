#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)	//շת������������������Լ��
{
	int a = 0;
	int b = 0;
	int temp = 0;
	printf("��������������");
	scanf("%d %d", &a, &b);
	while (temp= a % b)
	{
		a = b;
		b = temp;
	}
	printf("���Լ����%d", b);
	return 0;
}


//int main()//	�Ƚ������� ����С�������
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
//		printf("���������룺");
//		scanf("%s", PassWord);
//		if (strcmp(PassWord,"123456") == 0)  //�ж��ַ�����Ȳ���ֱ����== Ҫ�ÿ⺯��strcmp
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("��������������˳���");
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
//	//int Riht = sizeof(arr1) / sizeof(arr1[0]) - 2;	//�ַ������������\0
//	int Right = strlen(arr1) - 1;
//	while (Left<=Right) 
// {
//	arr2[Left] = arr1[Left];
//	arr2[Right] = arr1[Right];
//	printf("%s\n",arr2);
//	Sleep(500); //��ʱ ��ҪWindowns��
//	Left++;
//	Right--;
//	}
//	return 0;
//}


//int main(void)	//�����������ö��ַ�Ѱ��Ԫ��
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int Left = 0; //���±�
//	int Sz = sizeof(arr) / sizeof(arr[0]);	//�������
//	int Input = 0;
//	int Right = Sz - 1;//���±�
//	printf("������һ������");
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
//			printf("�ҵ���:%d\n", Input);
//			break;
//		}
//		if (Left > Right)
//		{
//			printf("û�ҵ�\n");
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
//	printf("������һ������");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("���������ҵ��������Ԫ�أ����±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("û���ҵ�");
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int z = 1;
//	int x = 1;
//	int n = 0;
//	printf("������һ����:");
//	scanf("%d", &z);
//	for (i = 1; i <= z; i++) {
//		x *= i;
//		n += x;}
//	printf("�׳�Ϊ��%d", n);
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