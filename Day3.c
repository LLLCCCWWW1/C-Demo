#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#include <string.h>
struct Book {
	char name[20];
	int price;
};

int main()
{
	struct Book b1 = {"C语言程序设计",55};
	struct Book* pb = &b1;
	printf("书名：%s\n", pb->name);
	printf("价格：%d元\n", pb->price);	//		结构体指针->成员
	printf("书名：%s\n", (*pb).name);	//.		结构体变量.成员
	printf("价格：%d元\n", (*pb).price);	
	strcpy(b1.name, "C++程序设计");		//strcpy--string copy -字符串拷贝 修改数字里字符串的内容
	b1.price = 15;
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	return 0;
}


//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	int a = 10;
//	int* p = &a; //p是一个指针变量
//	//printf("%p\n", p);
//	*p = 20; //* - 解引用操作符，间接访问操作符 相当于间接寻址
//	printf("a=%d", a);
//	return 0;
//}


//void test()
//{
//	//static 修饰局部变量 局部变量生命周期变长
//	//给自己加上一个static 下辈子就能记住这辈子的事了
//	static int a = 0;	//静态局部变量第一次初始化过后，之后调用是不再被初始化，不会被销毁，为上一次的值
//	a++;
//	printf("a=%d\n", a);
//} 
////static修饰全局变量  改变作用域
///*
//	eg:在adc.c文件中定义 int a =0; 在其他源文件可以使用extern int a = 0; 调用
//	但是如果在adc.c文件中定义static int a = 0; 在其他源文件不能使用extern int a = 0;调用
//*/
////static修饰函数 改变了函数的链接属性 即调用属性 无法被调用 外部链接属性失效
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test(); //循环后结果为12345
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	//typedef 类型重定义
//	typedef unsigned int uint; //uint现在为unsigned int 
//	register int a = 10;	//建议把a定义成寄存器变量 编译器自行判断是否为寄存器变量
//	return 0;
//}


//int Max(int a, int b)
//{
//	int max = 0;
//	// exp1?exp2:exp3   如果exp1为真 执行exp2 否则执行exp3
//	max =(a > b ? a : b);	//三目操作符
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);
//	printf("最大的数是%d\n", max);
//	return 0;
//}


//int main()
//{
//	//假 0
//	//真 非0为真
//	//&&逻辑与
//	//||逻辑或
//	int a = 0;	
//	int b = 5;	
//	int c = a && b; //有假则假
//	int d = a || b;	//有真则真
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int a =(int)3.14;	//强制类型转换 double-->int
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先用后加1
//	int c = ++a;//前置++，先加1后用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;		//~按（2进制）取反 
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
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0])); //求数组元素个数
//	return 0;
//}