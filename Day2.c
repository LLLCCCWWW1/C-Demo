#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a = 10;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int c = sizeof(array) / sizeof(array[1]);//��������Ԫ�ظ���
	printf("%zd\n", sizeof(a));	//sizeof������Ǳ��������͵Ĵ�С
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof a);
	//rintf("%d\n", sizeof int);//����
	printf("%d\n", sizeof(array));
	printf("c=%d\n", c);
	return 0;
}


//int Sum_A_B(int a, int b)
//{
//	int Sum = a + b;
//	return Sum;
//}
//
//int main()
//{
//	int sum = 0;
//	int Num1 = 0;
//	int Num2 = 0;
//	printf("������������\n");
//	scanf("%d %d", &Num1, &Num2);
//	sum = Sum_A_B(Num1, Num2);
//	printf("����֮��=%d\n", sum);
//	return 0;
//}


//int main()
//{	
//	int line = 0;
//	printf("�ú�ѧc");
//		while (line < 20000)
//		{
//			printf("������ÿһ�д���");
//			line++;
//			printf("\tline=%d\n", line);
//		}
//		printf("�õ�һ���ù���\n");
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	printf("%zd\n", strlen("c:\test\32\test.c"));
//	printf("%d\n", '\12');	//\12Ϊ12��Ӧ��8�������� \x˵������16�������� ����ת��10������
//	return 0;
//}


//#include <string.h>
//int main(void)
//{
//	"abc";//�ַ�������  ʵ��Ϊ:'abc\0' \0Ϊ�ַ���������־  �������ַ�������
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};// \0��ֵ��0 ASCII����
//	printf("arr1[]=%s\n", arr1);
//	printf("arr2[]=%s\n", arr2);
//	printf("%zd\n", strlen(arr1));//strlen�����ַ������� 
//	printf("%zd\n", strlen(arr2));
//	printf("C:\\test\\32\\test.c\n");//ע��ת���ַ�(\��ĸ)	 \\��ʾһ����������б��
//	printf("(Are you ok??)\n");
//	printf("%c\n",'\'');	//��ֹ����������ʶ��' ��Ҫʹ��ת���ַ���\'��������'
//	printf("%s\n", "\"");
//	return 0;
//}


//enum Sex {			//����ö�ٳ��� 
//	MALE,
//	FEMALE,
//	SECRET	 //���ܸı�
//};
////ö�ٳ���������������Զ����� �൱���Զ�����
//enum Color {
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main(void)
//{
//	enum Color red = RED;
//	enum Color green = GREEN;
//	enum Color blue = BLUE;
//	printf("%d\n", red);//0
//	printf("%d\n", green);//1
//	printf("%d\n", BLUE);//2
//
//	printf("%d\n", MALE); //0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}


//#define LENGTH 10 //�궨��һ��ȫ����д
//int main(void)
//{
//	int array[LENGTH] = { 0 };	//�궨��ı�ʶ���������Ը�����һ��ȷ������
//	printf("%d\n", array[0]);
//	return 0;
//}


//int main(void)
//{
//	const int n = 9;//const:������������ʹ����ֵ������󲻸ı� �޷����¸�ֵ
//	int arr[n] = { 0 };//������n ���ܵ�������
//	printf("%d\n", n);
//	//num = 10;	//��ʱ�޷����¸�ֵ ��Ϊ��const����
//	//printf("%d\n", num);
// 3;//���泣��
// 10;
//	return 0;
//}


//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}