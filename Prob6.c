#include <stdio.h>
int diff(int);

int main()
{
	int terms = 100;
    diff(terms);
}
	
int diff(int n)
{
	int sumOfSq = 0,sqOfSum = 0,x=0,diff = 0;
    sumOfSq = n*(n+1)*(2*n+1)/6;
    x = n*(n+1)/2;
    sqOfSum = x*x;
    diff = sqOfSum - sumOfSq;
    printf("Difference: %d\n",diff);
    return 0;

}