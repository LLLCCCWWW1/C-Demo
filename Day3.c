#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#include <string.h>
struct Book {
	char name[20];
	int price;
};

int main()
{
	struct Book b1 = {"C���Գ������",55};
	struct Book* pb = &b1;
	printf("������%s\n", pb->name);
	printf("�۸�%dԪ\n", pb->price);	//		�ṹ��ָ��->��Ա
	printf("������%s\n", (*pb).name);	//.		�ṹ�����.��Ա
	printf("�۸�%dԪ\n", (*pb).price);	
	strcpy(b1.name, "C++�������");		//strcpy--string copy -�ַ������� �޸��������ַ���������
	b1.price = 15;
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	return 0;
}


//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	int a = 10;
//	int* p = &a; //p��һ��ָ�����
//	//printf("%p\n", p);
//	*p = 20; //* - �����ò���������ӷ��ʲ����� �൱�ڼ��Ѱַ
//	printf("a=%d", a);
//	return 0;
//}


//void test()
//{
//	//static ���ξֲ����� �ֲ������������ڱ䳤
//	//���Լ�����һ��static �±��Ӿ��ܼ�ס�Ⱳ�ӵ�����
//	static int a = 0;	//��̬�ֲ�������һ�γ�ʼ������֮������ǲ��ٱ���ʼ�������ᱻ���٣�Ϊ��һ�ε�ֵ
//	a++;
//	printf("a=%d\n", a);
//} 
////static����ȫ�ֱ���  �ı�������
///*
//	eg:��adc.c�ļ��ж��� int a =0; ������Դ�ļ�����ʹ��extern int a = 0; ����
//	���������adc.c�ļ��ж���static int a = 0; ������Դ�ļ�����ʹ��extern int a = 0;����
//*/
////static���κ��� �ı��˺������������� ���������� �޷������� �ⲿ��������ʧЧ
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test(); //ѭ������Ϊ12345
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	//typedef �����ض���
//	typedef unsigned int uint; //uint����Ϊunsigned int 
//	register int a = 10;	//�����a����ɼĴ������� �����������ж��Ƿ�Ϊ�Ĵ�������
//	return 0;
//}


//int Max(int a, int b)
//{
//	int max = 0;
//	// exp1?exp2:exp3   ���exp1Ϊ�� ִ��exp2 ����ִ��exp3
//	max =(a > b ? a : b);	//��Ŀ������
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);
//	printf("��������%d\n", max);
//	return 0;
//}


//int main()
//{
//	//�� 0
//	//�� ��0Ϊ��
//	//&&�߼���
//	//||�߼���
//	int a = 0;	
//	int b = 5;	
//	int c = a && b; //�м����
//	int d = a || b;	//��������
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int a =(int)3.14;	//ǿ������ת�� double-->int
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = a++;//����++�����ú��1
//	int c = ++a;//ǰ��++���ȼ�1����
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;		//~����2���ƣ�ȡ�� 
//	printf("%\d", b);
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0])); //������Ԫ�ظ���
//	return 0;
//}