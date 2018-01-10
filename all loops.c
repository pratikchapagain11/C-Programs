/*
author:Pratik Chapagain
Lab no:8
Date:10th jan
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,c;
printf("1 for for loop\n");
printf("2 for while loop\n");
printf("3 for do while loop\n");
printf("Enter a choice");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter the number");
scanf("%d",&n);
    for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
break;
case 2:printf("enter the number");
scanf("%d",&n);
    i=1;
while(i<=10)
{
printf("%d\n",i);
i++;
}
break;
case 3:printf("enter the number");
scanf("%d",&n);
i=1;
do
{
printf("%d\n",i);
i++;
}while(i<=n);
break;
default: printf("invalid choice");
}
getch();
return(0);
}
