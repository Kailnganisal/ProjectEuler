#include  <stdio.h>
#include <math.h>
int main(void)
{
    int i,flag = 0,n = 2000000;
    unsigned long sum=0;
    
    for(i=2;i<=n;i++)
    {
        flag = 0;
        for(int j = 2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            sum += i;
        }
    }
    
    printf("%lu ",sum);
            
    return 0;
}