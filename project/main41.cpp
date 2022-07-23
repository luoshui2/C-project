#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 40
void inputScore(float score[],int N);
float avgScore(float score[],int N);
int main()
{
    float score[MAXNUM],avg;
    int N;
    scanf("%d",&N);
    /******添加对N的合法性检查的代码，若N不在2-40范围，则输出：输入错误，并退出程序******/
    if(N<2||N>40)
    {
    	printf("输入错误");
    	return 0;
	}
    /*******end*************************************************************************/
    inputScore(score,N);
    avg=avgScore(score,N);
    printf("平均成绩为%.2f",avg);
    return 0;
}
/******请根据任务要求在下面添加定义上面两个函数的代码*******/
void inputScore(float score[40],int N)
{	int i;
	for(i=0;i<N;i++)
	{
		scanf("%f",&score[i]);
		if(score[i]<0||score[i]>100)
		{
			printf("请重新输入\n");
			score[i]=0;
			i--; 
		}
	}
}
float avgScore(float score[40],int N)
{
	int i;
	float sum;
	for(i=0,sum=0;i<N;i++)
	{
		sum=sum+score[i];
	}
	return (float)sum/N;
}

