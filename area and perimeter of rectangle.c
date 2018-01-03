
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float l,b,A,P;
    printf("Enter the sides of rectangle:\n");
    scanf("%f%f",&l,&b);
    P=2*(l+b);
    A=l*b;
    printf("The perimeter of rectangle is:%f\n",P);
    printf("The area of rectangle is:%f",A);
    getch();

}

