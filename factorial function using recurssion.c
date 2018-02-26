#include<stdio.h>
#include<conio.h>
int fact(int a);

int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    printf("\nThe factorial is: %d ",fact(a));
    getch();
    return 0;
}


int fact(int a)
{
    if(a==0)
        {
            return 1;
        }
    else if(a==1)
    {
        return 1;
    }
    else
        {
        return a*fact(a-1);
        }
}
