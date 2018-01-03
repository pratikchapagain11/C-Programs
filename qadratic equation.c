#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

    float X1,X2,b,a,c;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    X1=(-b+sqrt(b*b-4*a*c))/2*a;
    X2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("The roots of quadratic equation are:%f\n%f",X1,X2);
    getch();
}
