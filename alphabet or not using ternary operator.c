#include<stdio.h>
#include<conio.h>
int main()
{
char a;
printf("enter a character");
scanf("%c",&a);
((a>=65&&a<=90)||(a>=97&&a<=122))?printf("it is a alphabet"):printf("it is not a alphabet");
getch();
return(0);
}
