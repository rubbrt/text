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
    
    while(temp/10>0){//多少位数 
        i++;
        temp=temp/10;
    }
	temp=number;    
    printf("i的值是%d\n",i);
    int a[i];//i的值就是多少位数 
    
    for(j=0;j<i;j++){
        a[j]=temp%10;
        printf("a[j]=%d\n",a[j]);//不要拿原来的数去除，不然待会比较的数会被改变 
        temp/=10;
    }
    
    int sum=0;
    for(j=0;j<i;j++){
        sum+=pow(a[j],i);
        printf("sum==%d\n",sum); //水仙花定义判断 
    }
    if(sum==number){
        printf("it is a Narcissistic number"); }
    else{printf("it is not a Narcissistic number");
		}
   
return 0;
}
