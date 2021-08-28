#include <stdio.h>
int fibonacci();

int main()
{
	int terms = 10;
    fibonacci();
}
	
int fibonacci(int a)
{

    int x=1, y=2,sum = 2;
    while(y<=4000000){
        int z = x+y;
        x=y;
        y=z;
        if(z%2==0){
            sum+=z;
        }
    }
    printf("\n");
    printf("%d \n",sum);

return 0;

}