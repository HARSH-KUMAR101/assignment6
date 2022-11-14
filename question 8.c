#include<stdio.h>
#include<conio.h>
int main()
{
 int i,num;
   printf("enter a num to check prime:");
   scanf("%d",&num);
     for(i=2;i<=num;i++)
     {
       if(num%i==0)
            break;
     }
     if(num==i)
        printf("%d is a prime number",num);
      else
        printf("%d is not a prime number",num);
   return 0;
}
