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
//		if ( '0'<ch && '9'<ch)	//��һ��д��ch>'0' || ch<'9'
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int password[20] = {0};
//	printf("������20λ���ڵ�����\n");
//	scanf("%s", password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("��ȷ��Y/N:");
//	int ch = getchar();
//	//switch (ch) {
//	//case 'Y':
//	//	printf("�����ɹ�\n");
//	//	break;
//	//case 'N':
//	//	printf("ȡ������\n");
//	//	break;
//	// default:
//	// printf("����ʧ��\n");
//	//
//	//}
//
//	if ('Y' == ch) {
//		printf("�����ɹ�\n");
//	}
//	else if('N'== ch){
//		printf("ȡ������\n");
//	}
//	else {
//		printf("����ʧ��\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	int ch = 0;
//	//ctrl+z��������
//	while ((ch = getchar()) != EOF)		
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main(void)
//{
//	int ch = getchar();
//	putchar(ch);  //��ӡ�ַ�
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:		//defaultλ����Ҫ��
//		printf("�������������1~7");
//		break;
//	}


	//switch(day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//default:		//defaultλ����Ҫ��
	//	printf("�������������1~7");
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
//	printf("������һ����");
//	scanf("%d", &num);
//	if (1 == num%2) {
//		printf("����������");
//	}
//	else {
//		printf("������ż��");
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
//	else	//else�����������δƥ���ifƥ��
//			printf("haha\n");
//	return 0;	
//}

 
//int main(void)
//{
//	int age = 0;
//	printf("����������");
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)	//����д��18<=age<=28
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("ĺ��");
//
//	;//�����
//	return 0;
//}