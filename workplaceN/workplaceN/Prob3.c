#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	long long int n=600851475143,i,prime=0;
	
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			prime = 1;
			for(int j=2;j<=sqrt(i);j++){
				if(i%j==0){
					prime = 0;
					break;
				}
			}
			if(prime == 1){
			printf("%d ",i);
		}
		}
		
	}
	printf("\n");
	return 0;
}
