#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,space;

for(i=5;i>=1;i--)
{
for(j=1;j<=5;j++)
{
if(j<i)
printf(" \t");
else
printf("*\t");
}
printf("\n");
}
getch();
return(0);
}
