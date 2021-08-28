#include <stdio.h>
unsigned long lcm(unsigned long a, unsigned long b);
unsigned long gcd(unsigned long x, unsigned long y);

int main()
{
	unsigned long i;
	unsigned long lcmR=1;
	for(i=1;i<=20;i++)
		{
			lcmR = lcm(lcmR,i);
		}
		printf(" LCM : %lu\n",lcmR);
		return 0;
}
	
unsigned long gcd(unsigned long x,unsigned long y)
{
	unsigned long gcd=0;
	unsigned long min=y;
	if(x<y)
	{
		min = x;
	}
	
	for(int i=1;i <=min;i++)
		{
			if(x%i==0 && y%i == 0)
			{
				gcd = i;
			}
		}
	return gcd;
}

unsigned long lcm(unsigned long a, unsigned long b)
{
	unsigned long multiple = 0;
	unsigned long lcm=0;
	multiple = (a*b);
	lcm = multiple/gcd(a,b);
	printf("\nGCD: %lu",gcd(a,b));
	return lcm;
	
}


