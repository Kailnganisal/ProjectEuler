
#include  <stdio.h>

int main(void)
{
    int a=1,b=2,c=0;
   
 for(a=1;a<=999;a++)
 {
     for(b=a;b<=999;b++)
     {
         c = 1000-a-b;
         if(a*a+b*b == c*c)
         {
             printf("%d ",a*b*c);
             break;
         }
     }
 }
            
    return 0;
}