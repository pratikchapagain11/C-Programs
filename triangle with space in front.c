#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,space;

for(i=1;i<=5;i++)
{
for(space=5;space>=i;space--)
{
printf(" \t");
}
for(j=1;j<=i;j++)
{
printf("*\t");
}
printf("\n");
}
getch();
return(0);
}
