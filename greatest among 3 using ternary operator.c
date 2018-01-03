#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c)? printf("first number is greatest"):((b>c)?printf("Second number is greater"):printf("third number is greater"));
}
