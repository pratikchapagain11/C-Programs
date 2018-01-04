#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter a year");
scanf("%d",&a);
(a%4==0&&a%100!=0)?printf("it is a leap year"):(a%400==0)?printf("it is a leap year"):printf("it is not a leap year");
getch();
return(0);
}
