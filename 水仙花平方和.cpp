#include <stdio.h>
#include <math.h>
#include <string.h>
// 水仙花
/*int main(){
	int n,m;
	int s=0;
	// 371  
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n<=m)printf("不符合\n")break;
		for(int w=n;n<=m;n++){
			// 100  1**3+0**3+0**3
			int ge = w%10;
			int shi = (w%100-ge)/10;
			int bai = (w%1000-shi-ge)/100;
			int s = (int)pow(ge,3)+(int)pow(shi,3)+(int)pow(bai,3);
			if(w==s){
				printf("水仙花%d\n",w);
			}
		}
	}
	printf("%d",s);
}*/

/*#include <stdio.h>
// 1045平方和
int main(){
	int a,b,c;
	int sa=0,sb=0;
	float sc=0,s=0,aint=1;
	// 371  
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		for(int i=1;i<=a;i++){
			sa+=i;
		}
		for(int j=1;j<=b;j++){
			sb+=j*j;
		}
		for(int k=1;k<=c;k++){
			sc+=aint/k;
		}
		s=sa+sb+sc;
		break; 
	}
	//47977.93
	printf("%.2f",s);
}*/

从0开始算
1、1、2、4、7、13、24、44、81、149
a1=1
a2=0+1
a3=1+1
a4=2+4
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