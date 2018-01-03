#include<stdio.h>
#include<conio.h>

int main()
 {
   int PF,IS,CA,OA,DS,FSE,sum,total=600;
   float per;

   printf("\nEnter marks of PF: ");
   scanf("%d",&PF);
   printf("\nEnter marks of :IS ");
   scanf("%d",&IS);
   printf("\nEnter marks of CA: ");
   scanf("%d",&CA);
   printf("\nEnter marks of OA: ");
   scanf("%d",&OA);
   printf("\nEnter marks of :DS ");
   scanf("%d",&DS);
   printf("\nEnter marks of FSE: ");
   scanf("%d",&FSE);
   sum = PF+IS+CA+OA+DS+FSE;
   printf("\nSum : %d", sum);

   per = (sum * 100) / total;
   printf("\nPercentage : %f", per);

  getch();
}
