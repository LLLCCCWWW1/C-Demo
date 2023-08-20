#include <stdio.h>

//int main()
//{
//    printf("Hello World");
//    return 0;
//}


int a = 100;

int main()
{
    //a=10;
    //局部变量和全局变量命名可以相同 不过最好不要相同 这样相当于a重新赋值了
    //printf("%d\n",a);//输出10 
    // char ch = 'A';
    // int age = 20;
    // float f=2;
    // printf("%c\n",ch);
    // printf("%d\n",age);
    // printf("%f\n",f);
    int num1 = 0;
    int nmu2 = 0;
    int sum = 0;
    scanf("%d %d", &num1, &nmu2);
    sum = num1 + nmu2;
    printf("sum = %d\n", sum);

    // printf("%d\n",sizeof(char));
    // printf("%d\n",sizeof(short));
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(long));    //C语言规定 sizeof(long)>sizeof(int)
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(long long));
    // printf("%d\n",sizeof(double));
    return 0;
}