//gcc 7.4.0

#include  <stdio.h>

int main(void)
{
    int i=2,n = 2,count = 1,flag = 0;
   
    while(count <= 10001)
    {
        flag = 0;
        i = 2;
        while(i<=n/2)
            {
                if(n%i == 0)
                {
                    flag = 1;
                    break;
                }
                i++;
            }
        if(flag == 0)
            {
                if(count == 10001)
                {
                    printf("%d ",n);
                }
            count++;
            }
        n++;
        
  }
            
    return 0;
}