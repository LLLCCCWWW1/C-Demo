#include "stdio.h"


//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);//可移植性差
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
}


//int main()//整形提升 表达式中的字符和短整型操作数在使用之前被转换为普通整形
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6)
//		printf("c");
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu S1 = { "张三",20,"202107124101" }; 
//	struct Stu* ps = &S1;
//	printf("%s\n", S1.name);
//	printf("%s\n", ps->name);	//结构体指针->成员名
//	printf("%d\n", (*ps).age);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++ && ++b && d++;	//有假就停止
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main(void)
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}