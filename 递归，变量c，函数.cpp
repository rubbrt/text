#include <stdio.h>
int F(int n){
	int c;
	if(n==0){
		c=7;
	}
	else if(n==1){
		c=11;
	}
	else{
		c=F(n-1)+F(n-2);
	}
	return c;
	
}
int main(){
	int answer;
	printf("������Ҫ���Fx��x��ֵ\n");
	int n;
	scanf("%d",&n);
	answer=F(n);
	printf("answer=%d",answer);
	return 0;	 
}
