#include<stdio.h>
#include<conio.h>
int main()
{
 int num,r,x=0;
   printf("enter a num:");
   scanf("%d",&num);
      while(num!=0){
        r=num%10;
        x=x*10+r;
        num=num/10;
        }
          printf("reverse is %d ",x);
   return 0;
}
