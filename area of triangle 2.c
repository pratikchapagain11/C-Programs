#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float b,h,area;
    printf("Enter two sides of triangle:\n");
    scanf("%f%f",&b,&h);
    area=0.5*(b*h);
    printf("The area of triangle is:%f",area);
    getch();

}
