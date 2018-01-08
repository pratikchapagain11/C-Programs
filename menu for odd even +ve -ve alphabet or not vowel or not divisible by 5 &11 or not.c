#include<stdio.h>
#include<conio.h>
void main()
{
int n,num;
char ch;
printf("1 for checking if the number is odd or even\n");
printf("2 for checking if the number is positive or negative\n");
printf("3 for checking if a character is alphabet or not\n");
printf("4 for checking if a character is vowel or not\n");
printf("5 for checking if a number is divisible by 5 and 11 or not\n");
printf("enter a option");
scanf("%d",&n);
switch(n)
{
case 1:printf("enter a number");
scanf("%d",&num);
(num%2==0)?printf("even"):printf("odd");
break;
case 2:printf("enter a number");
scanf("%d",&num);
(num>0)? printf("positive"):printf("negative");
break;
case 3:printf("enter a character\n");
    scanf(" %c",&ch);
((ch>=65&&ch<=90)||(ch>=97&&ch<=122))?printf("it is a alphabet"):printf("it is not a alphabet");
break;
case 4:printf("enter a character");
scanf(" %c",&ch);
(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?printf("the character is vowel"):printf("the character is consonant");
break;
case 5:printf("enter a number");
scanf("%d",&num);
(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?printf("the character is vowel"):printf("the character is consonant");
break;
default:printf(" idiot choose between 1 and 5");
}
getch();
}
