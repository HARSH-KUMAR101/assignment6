#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,sum=0;
    printf("enter a num:");
    scanf("%d",&num);
      for(i=1;i<=num;i++)
      {
         sum=sum+i*i;
      }
      printf("sum of square of first %d natural num is %d",num,sum);
      return 0;
}
