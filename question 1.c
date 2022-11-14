#include<stdio.h>
#include<conio.h>
int main()
{
  int i,num,sum=0;
     printf("enter a num");
     scanf("%d",&num);
        for(i=1;i<=num;i++){
            sum=sum+i;
        }
 printf("sum of natural num till given is %d",sum);
 return 0;
}
