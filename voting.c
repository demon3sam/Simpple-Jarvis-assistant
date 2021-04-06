#include<stdio.h>
int main()
{
    int a,b,c;
   
printf("\n\n*****Wellcom to voting system*****");
printf("\n\t\tSelect your panel");
printf("\n\n\t\t1 student panel \n\n\t\t2 employe panel \n\n\t\t3 retierd panel\n\n\t\t");
scanf("%d", &a);
if (a==1)
{
  printf("you selected student panel\n\n");
}
else if(a==2)
{
    printf("you selected employe panel\n\n");
}
if(a==3)
{
    printf("you selected retierd panel\n\n");
}
printf("\nGive your vote\n\t");
printf("\n\n\t\t1Raju \n\n\t\t2Sham \n\n\t\t3Baburao\n\n\t\t");

scanf("%d", &b);
printf("\n\nConferm your vote\n");
// printf("\n&a");
// printf("\n\t");
// printf("\n&b");
printf("\n\t1Yes\n\t2No\n");

scanf("%d", &c);
if (c==1)
{
  printf("\nYour vote is submited\n\t");
//   printf("%d%d", &a,b);
}
else
{
    printf("\nYour vote is not submited\n");
}
return 0;
}