#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float CI,p,r,t;
    printf("enter p,t,r,\n");
    scanf("%f%f%f",&p,&t,&r);
    CI=p*pow((1+r/100),t);
    printf("the compound interest is:%f",CI);
    getch();
}
