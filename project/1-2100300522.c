/*#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
			printf("%dX%d=%2d ",j,i,i*j);
		printf("\n");
	}
	return 66;
}*/
/*#include <stdio.h>
int main()
{
	int num=0,score=0,sum=0,average=0,failed=0;
	for(num;;)
	{
		scanf("%d",&score);
		if(score<0) break;
		num++;
		sum=sum+score;
		if(score<60) failed++;
		
	}
	printf("%d\n",sum/num);
	printf("%d",failed);
	return 6;
}*/


/*#include <stdio.h>
int main()
{	int big=0,small=0,others=0,chars=0,num=0,sum=0;
	for(;;)
	{
		scanf("%c",&chars);
		sum++;
		if(chars>='a'&&chars<='z')
		{
			small++;
		}
		if(chars>='A'&&chars<='Z')
		{
			big++;
		}
		if(chars>='0'&&chars<'9')
		{
			num++;
		}
		
		if(chars=='q'||chars=='Q')
		{
			break;
		}
	}
	printf("%d %d %d %d ",num,small,big,sum-num-small-big);
	return 66;
}*/
/*#include <stdio.h>
int main()
{	int i,j=0;
	char a[80]={};
	gets(a);
	for(i=0;i!='\0';i++)
	{
		if((a[i]>='a'||a[i]<='z'||a[i]>='A'||a[i]<='Z')&&(a[i+1]==32||a[i+1]=='.'))
		{
			j++;
		}
	}
	printf("%d",j);
	return 66;
}*/
/*#include <stdio.h>
int main()
{	int money,one,tow,five,i=0;
	scanf("%d",&money);
	for(five=20;five>0;five--)
		for(tow=50;tow>=0;tow--)
			for(one=100;one>=0;one--)
				{
					if(((5*five+2*tow+1*one)==money)&&(tow!=0&&one!=0))
					{
						printf("%d %d %d\n",five,tow,one);
						i++;
					}
				}
	printf("%d",i);
	return 66;
}*/
/*#include <stdio.h>
int main()
{	int i,j;
	char a[80];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='0'&&a[i+1]==' ')
		{
			j++;
		}
	}
	printf("%d",j);
	return 66;
}*/
/*#include <stdio.h>
int main()
{	int N,a[100],i,sum=0,max,min;
	double average;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<N;i++)
	{
		sum=sum+a[i];
	}
	max=a[0];
	min=a[0];
	for(i=1;i<N;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d %d %.2f",max,min,sum/(double)N);
	return 66;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	int score[40],count[10]={0},i,j;
	srand(time(NULL));
	for(i=0;i<40;i++)
	{
		score[i]=(rand()%10+1);
	}
	for(i=0;i<40;i++)
	{
		switch(score[i])
		{
			case 1:count[0]++;break;
			case 2:count[1]++;break;
			case 3:count[2]++;break;
			case 4:count[3]++;break;
			case 5:count[4]++;break;
			case 6:count[5]++;break;
			case 7:count[6]++;break;
			case 8:count[7]++;break;
			case 9:count[8]++;break;
			case 10:count[9]++;break;
			default:;
		}
	}
	printf("Grade  Count  Histogram\n");
	for(i=1;i<11;i++)
	{
		printf("%2d  ",i);
		printf("    %2d      ",count[i-1]);
		for(j=0;j<count[i-1];j++)
		{
			printf("*");
		}
		printf("\n");
		
	}	
	return 66;
}*/
/*#include <stdio.h>
#define N 10
int main()
{	int score[N],count[10]={0},i,j;
	for(i=0;i<N;i++)
	{
		scanf("%d",&score[i]);
	}
	for(i=0;i<N;i++)
	{
		switch(score[i])
		{
			case 1:count[0]++;break;
			case 2:count[1]++;break;
			case 3:count[2]++;break;
			case 4:count[3]++;break;
			case 5:count[4]++;break;
			case 6:count[5]++;break;
			case 7:count[6]++;break;
			case 8:count[7]++;break;
			case 9:count[8]++;break;
			case 10:count[9]++;break;
		}
	}
	for(i=1;i<=10;i++)
	{
		printf("%d	%d	",i,count[i-1]);
		for(j=0;j<count[i-1];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 66;
}

/*#include <stdio.h>
#define N 40
int main()
{	int score[5],count[10]={0},i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&score[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",(int)score[i]);
	}
	return 66;
}*/
#include <stdio.h>
int main()
{	int array[5][5]={{17,24,1,8,15},{23,5,7,14,16},{4,6,13,20,22},{10,12,19,21,3},{11,18,25,2,9}},i,j,sum=0,flag=1,result;
	for(j=0;j<5;j++)
	{
		sum=sum+array[0][j];
	}
	for(i=1;i<5;i++)
	{	result=0;
		for(j=0;j<5;j++)
		{
			result=result+array[i][j];
		}
		printf("%d\n",result);
		if(result!=sum){
			flag=0;
		}
	}
	for(i=0;i<5;i++)
	{	result=0;
		for(j=0;j<5;j++)
		{
			result=result+array[j][i];
		}
		printf("%d\n",result);
		if(result!=sum){
			flag=0;
		}
	}
	for(i=0,result=0;i<5;i++)
	{
		result=result+array[i][i];
	}
	printf("%d\n",result);
	if(result!=sum)
	{
			flag=0;
	}
	for(i=0,j=4,result=0;i<5&&j>=0;i++,j--)
	{
		result=result+array[i][j];
	}
	printf("%d\n",result);
	if(result!=sum)
	{
			flag=0;
	}
	if(flag==1)
	{
		printf("yes\n");
	}
	else printf("no\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("  %2d ",array[i][j]);
		}
		printf("\n");
	}
	return 66;
}





















































