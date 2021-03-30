#include <stdio.h>
int fibonacci(int n)
{
	if(n <= 2)
	{
		return 1;
	}else if(n=3){
		return 
	}
	else
	{
	    return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(){
	int n;
		while(scanf("%d",&n)!=EOF){
			printf("%d\n", fibonacci(n));
			break;
		}
	return 0;
}