#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a = 10;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int c = sizeof(array) / sizeof(array[1]);//计算数组元素个数
	printf("%zd\n", sizeof(a));	//sizeof计算的是变量或类型的大小
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof a);
	//rintf("%d\n", sizeof int);//错误
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
//	printf("请输入两个数\n");
//	scanf("%d %d", &Num1, &Num2);
//	sum = Sum_A_B(Num1, Num2);
//	printf("两数之和=%d\n", sum);
//	return 0;
//}


//int main()
//{	
//	int line = 0;
//	printf("好好学c");
//		while (line < 20000)
//		{
//			printf("认真敲每一行代码");
//			line++;
//			printf("\tline=%d\n", line);
//		}
//		printf("得到一个好工作\n");
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	printf("%zd\n", strlen("c:\test\32\test.c"));
//	printf("%d\n", '\12');	//\12为12对应的8进制数字 \x说明后面16进制数字 对于转成10进制数
//	return 0;
//}


//#include <string.h>
//int main(void)
//{
//	"abc";//字符串类型  实际为:'abc\0' \0为字符串结束标志  不算做字符串内容
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};// \0的值是0 ASCII编码
//	printf("arr1[]=%s\n", arr1);
//	printf("arr2[]=%s\n", arr2);
//	printf("%zd\n", strlen(arr1));//strlen计算字符串长度 
//	printf("%zd\n", strlen(arr2));
//	printf("C:\\test\\32\\test.c\n");//注意转义字符(\字母)	 \\表示一个正常的右斜杠
//	printf("(Are you ok??)\n");
//	printf("%c\n",'\'');	//防止编译器错误识别' 需要使用转义字符变\'成正常的'
//	printf("%s\n", "\"");
//	return 0;
//}


//enum Sex {			//定义枚举常量 
//	MALE,
//	FEMALE,
//	SECRET	 //不能改变
//};
////枚举常量里面的数可以自动增加 相当于自动计数
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


//#define LENGTH 10 //宏定义一般全部大写
//int main(void)
//{
//	int array[LENGTH] = { 0 };	//宏定义的标识符常量可以给数组一个确定长度
//	printf("%d\n", array[0]);
//	return 0;
//}


//int main(void)
//{
//	const int n = 9;//const:常变量，可以使变量值定义过后不改变 无法重新赋值
//	int arr[n] = { 0 };//常变量n 不能当常量用
//	printf("%d\n", n);
//	//num = 10;	//此时无法重新赋值 因为是const类型
//	//printf("%d\n", num);
// 3;//字面常量
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