#include <cmath>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    
	int number;
    int i=1;
    int j;
    printf("please add an number\n");
    scanf("%d",&number);
    int temp=number;
    
    while(temp/10>0){//����λ�� 
        i++;
        temp=temp/10;
    }
	temp=number;    
    printf("i��ֵ��%d\n",i);
    int a[i];//i��ֵ���Ƕ���λ�� 
    
    for(j=0;j<i;j++){
        a[j]=temp%10;
        printf("a[j]=%d\n",a[j]);//��Ҫ��ԭ������ȥ������Ȼ����Ƚϵ����ᱻ�ı� 
        temp/=10;
    }
    
    int sum=0;
    for(j=0;j<i;j++){
        sum+=pow(a[j],i);
        printf("sum==%d\n",sum); //ˮ�ɻ������ж� 
    }
    if(sum==number){
        printf("it is a Narcissistic number"); }
    else{printf("it is not a Narcissistic number");
		}
   
return 0;
}
