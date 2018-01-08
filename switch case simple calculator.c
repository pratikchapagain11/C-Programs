#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,sum,sub,mul,div,n;
printf("simple calculator\n");
printf("1 addition\n");
printf("2 subtraction\n");
printf("3 multiplication\n");
printf("4 division\n");
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("enter your choice\n");
scanf("%d",&n);
switch(n)
{
case 1:sum=a+b;
printf("sum is %d",sum);
break;
case 2:sub=a-b;
printf("subtraction is %d",sub);
break;
case 3:mul=a+b;
printf("product is %d",mul);
break;
case 4:div=a/b;
printf("division is %d",div);
break;
default:printf("Math error");
}
getch();
return(0);
}
