#include<stdio.h>
#include<conio.h>
void main()
{
float r,v,a,pi=3.14;
printf("enter radius\n");
scanf("%f",&r);
v=4/3*pi*r*r*r;
a=4*pi*r*r;
printf("the volume is%f\n",v);
printf("surface area is:%f",a);
getch();
}
