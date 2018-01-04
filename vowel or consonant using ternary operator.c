#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter a character");
scanf("%c",&ch);
(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')?printf("the character is vowel"):printf("the character is consonant");
getch();
}
