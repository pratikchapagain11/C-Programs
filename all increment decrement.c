//all increment decrement
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("The pre increment is:%d\n",++a);
    printf("The post increment is:%d\n",a++);
    printf("The pre decrement is:%d\n",--a);
    printf("The post decrement is:%d\n",a--);
    getch();
    }
