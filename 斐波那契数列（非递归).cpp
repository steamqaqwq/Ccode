#include <stdio.h>
int main(){
	int n;
	while (scanf("%d",&n)!=EOF){
		int a=1,b=1,c=2;
		if(n==0)printf("1\n");
		else if(n==1)printf("1\n");
		else if(n==2)printf("2\n");
		else {
			n-=2;
			int d;
			while (n>0){
				d= a+b+c;
				a=b;
				b=c;
				c=d;
				n-=1;

			}
			printf("%d\n", d);
		}
	}
	return 0;
}