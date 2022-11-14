#include<stdio.h>
#include<conio.h>
int main()
{
  int x,count=0;
     printf("enter a num:");
     scanf("%d",&x);
       while(x!=0){
        x=x/10;
        count++;
       }
       printf("total num of digit is %d",count);
   return 0;
}
