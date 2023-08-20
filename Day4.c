#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 


//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int S = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++) {
//			S = i * j;
//			if (j < i);
//			else
//				printf("%d*%d=%2d  ", i, j, S);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ( '0'<ch && '9'<ch)	//另一种写法ch>'0' || ch<'9'
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int password[20] = {0};
//	printf("请输入20位以内的密码\n");
//	scanf("%s", password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认Y/N:");
//	int ch = getchar();
//	//switch (ch) {
//	//case 'Y':
//	//	printf("操作成功\n");
//	//	break;
//	//case 'N':
//	//	printf("取消操作\n");
//	//	break;
//	// default:
//	// printf("操作失败\n");
//	//
//	//}
//
//	if ('Y' == ch) {
//		printf("操作成功\n");
//	}
//	else if('N'== ch){
//		printf("取消操作\n");
//	}
//	else {
//		printf("操作失败\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	int ch = 0;
//	//ctrl+z结束程序
//	while ((ch = getchar()) != EOF)		
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main(void)
//{
//	int ch = getchar();
//	putchar(ch);  //打印字符
//
//	return 0;
//}


//int main(void)
//{
//	int day = 0;
//	scanf("%d" ,& day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:		//default位置无要求
//		printf("输入错误，请输入1~7");
//		break;
//	}


	//switch(day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//default:		//default位置无要求
	//	printf("输入错误，请输入1~7");
	//	break;
	//}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if (1 == i % 2) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	for (i=0;i<100;i++)
//	{
//		if (1 == i % 2) {
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	printf("请输入一个数");
//	scanf("%d", &num);
//	if (1 == num%2) {
//		printf("该数是奇数");
//	}
//	else {
//		printf("该数是偶数");
//	}
//	return 0;
//}



//int main(void)
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else	//else和离他最近的未匹配的if匹配
//			printf("haha\n");
//	return 0;	
//}

 
//int main(void)
//{
//	int age = 0;
//	printf("请输入年龄");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)	//不能写成18<=age<=28
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("暮年");
//
//	;//空语句
//	return 0;
//}