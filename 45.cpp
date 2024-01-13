#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    int id;
    char *name;
    int age;
    int sex;
    struct student* next;
};
void Input(struct student*stu,int id,char *name,int age,int sex){
    stu->id=id;
    strcpy(stu->name,name);
    stu->age=age;
    stu->sex=sex;
}
int main(){
    struct student* head;
    head->next=NULL;
    struct student *tail;
    struct student *p=(struct student*)malloc(sizeof(struct student));
    head=p;
    tail=p;
    int i,n;
    printf("please add the number of the people");
    scanf("%d",&n);

    int id;
    int age;
    char name[30];
    int sex;
    int L_age[100]={0};

    for(i=1;i<=n;i++){
        
        printf("id");
        scanf("%d",&id);
        
        fgets(name, sizeof(name), stdin);
		getchar();
		 
        printf("age");
        scanf("%d",&age);
        

        printf("sex");
        scanf("%d",&sex);

        p=(struct student*)malloc(sizeof(struct student));
        Input(&p,id,name,age,sex);
        
        tail->next=p;
        tail=p;
        tail->next=NULL;
    }
    p=head;
    
    while(p->next!=tail){
        
        if(*(L_age+p->next->age)==1){p->next=p->next->next;}
        L_age[p->age]=1;
    }
    return 0;
}
