#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    int a,b,multiplication,addition,subtraction,division,modulus;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    multiplication=a*b;
    addition=a+b;
    subtraction=a-b;
    division=a/b;
    modulus=a%b;
    printf("The multiplication of two numbers is:%d\n",multiplication);
    printf("The addition of two numbers is:%d\n",addition);
    printf("The subtraction of two numbers is:%d\n",subtraction);
    printf("The division of two numbers is:%d\n",division);
    printf("The modulus of two numbers is:%d\n",modulus);
    getch();
}
