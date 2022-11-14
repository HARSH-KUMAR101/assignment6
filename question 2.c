#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,even=0;
    printf("enter a num:");
    scanf("%d",&num);
      for(i=1;i<=num;i++){
        even=even+(2*i);
      }
    printf("sum of first %d even num is %d",num,even);
    return 0;
}
