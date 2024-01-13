#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int id;
    int score[3];
};

int Input(struct student *stu,char *name,int id,float *score){
    strcpy(stu->name,name);
    stu->id=id;     //这里也要用箭头
    int i;
    float sum=0.0,average;
    for(i=0;i<=2;i++){
        stu->score[i]=score[i];
        sum+=score[i];
    }
    average=sum/3;
    return average;
}

int main(){
    int i,j;
    struct student stu;
    char name[30];
    int id;
    float score[3];
    float average[3];

    for(i=0;i<=2;i++){
        printf("add a name\n");
        gets(name);

        printf("add an id\n");
        scanf("%d",&id);

        printf("please add your score\n");
        for(j=0;j<3;j++){scanf("%d",score+j);}

        average[i]=Input(&stu,name,id,score);}

        int max=average[0];
        int t;

        for(i=0;i<=2;i++){
            if (max<average[i])
            {
                t=max;
                max=average[i];
                average[i]=t;
            }}
        printf("%d",max);
        return 0;
        }
 
