#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,sum,sub,mul,div,square_root,n;
printf("simple calculator\n");
printf("enter a choice");
scanf("%d",&n);
switch(n)
{
case 1:printf("enter a number");
scanf("%d",&a);
square_root=sqrt(a);
printf("sq rt%d",square_root);
break;
default:printf("Math error");
}
getch();
return(0);
}
