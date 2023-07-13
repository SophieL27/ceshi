#include <stdio.h>
#include <stdlib.h>
//测试
int main()
{
   int n=1;
   while(!((n%2==1)&&(n%3==2)&&(n%5==4)&&(n%6==5)&&(n%7==0)))
   {
       n=n+1;
   }
   printf("%d",n);
    return 0;
}
