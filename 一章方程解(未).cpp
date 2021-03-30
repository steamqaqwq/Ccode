#include <stdio.h>
/*
X+Y=A

X^2+Y^2=B

X^3+Y^3=C

X^4+Y^4=D

给出A、B、C、D四个值，你能判断A、B、C、D这四个值能同时让上面四个式子成立吗？

请注意X,Y的解要为实数。
*/
int main(){
	int A,B;
	int X,Y,result;
	printf("有多组测试数据。每组中都输入四个整数，分别是A、B、C、D。\n0<=A,B,C,D<=50\n");
	while(scanf("%d%d",&A,&B)!=EOF){
		Y=A-X;
		result = X*X+(A-X)*(A-X);
		if(result==B){
			printf("OK %d\n",result);
		}else{
			printf("NO%d\n",Y);
		}
		break;
	};

	return 0;
}