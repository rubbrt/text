#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int compare(char *p){
    char temp[]="cccc";
    int a=strcmp(p,temp);
        printf("a=%d\n",a); 
		if (a>0)
        {
            printf("it is longer than temp");
        }else {printf("it is shorter than temp");}
        
    }



int main(){
    char name[30];
    printf("your name\n");
    scanf("%s",name);
    //puts(name);
    char *p=name;
    puts(p);
    compare(name);
      
return 0;
}
