#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float f,c;
    printf("enter the Fahrenheit scale:\n");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("the Fahrenheit in degree Celsius is:%f",c);
    getch();
}

