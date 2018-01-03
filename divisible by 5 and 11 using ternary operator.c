#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
(n%5==0&&n%11==0)?printf("Number is divisible by 5 and 11"):printf("Number is not divisible by 5 and 11");
}
