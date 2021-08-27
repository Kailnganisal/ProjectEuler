#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int i,j,num=0,reverse=0,max=0,maxi=0,maxj=0;
	
	for(i=100;i<=999;i++)
	{
		for(j=100;j<=999;j++)
		{
			num = i*j;
			int tmp = num;
			reverse=0;
			for(int z=num;z!=0;z=z/10)
				{
					int r = z%10;
					reverse = reverse*10+r;
				}
//			while(num!=0){
//				int r = num%10;
//				reverse = reverse*10+r;
//				num=num/10;
//				
//			}
			//printf("tmp: %d reverse: reverse: %d\n",tmp,reverse);
			if(tmp == reverse){
				if(max<tmp){
					max = tmp;
					maxi=i;
					maxj=j;
					}
				}
		}
	}
	printf("Palindrome: %d, i: %d, j: %d\n",max,maxi,maxj);
		
	return 0;
}