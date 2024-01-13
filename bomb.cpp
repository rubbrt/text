#include <stdio.h>
int main()
{
	char map[3][3];
	int i=0;
	int j=0;
	for(i=0;i<=2;i++){
		scanf("%s",map[i]);
	}
	
	for(j=0;j<3;j++){
	while(map[i][j]!='#'){
		int x,y;
		x=i;y=j;
		int sum=0;
		if(map[x][y]=='G')
		{
			sum++;
		}
		x++;
		printf("该点下方可清除的炸弹人数为%d",sum);	
		if(x=3){continue;
		}
	} 
	
	}
}
