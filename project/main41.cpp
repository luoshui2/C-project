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
    /******��Ӷ�N�ĺϷ��Լ��Ĵ��룬��N����2-40��Χ���������������󣬲��˳�����******/
    if(N<2||N>40)
    {
    	printf("�������");
    	return 0;
	}
    /*******end*************************************************************************/
    inputScore(score,N);
    avg=avgScore(score,N);
    printf("ƽ���ɼ�Ϊ%.2f",avg);
    return 0;
}
/******���������Ҫ����������Ӷ����������������Ĵ���*******/
void inputScore(float score[40],int N)
{	int i;
	for(i=0;i<N;i++)
	{
		scanf("%f",&score[i]);
		if(score[i]<0||score[i]>100)
		{
			printf("����������\n");
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

