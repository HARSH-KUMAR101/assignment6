#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,odd=0;
    printf("enter a num:");
    scanf("%d",&num);
      for(i=1;i<=num;i++){
        odd=odd+(2*i-1);
      }
    printf("sum of first %d odd num is %d",num,odd);
    return 0;
}
