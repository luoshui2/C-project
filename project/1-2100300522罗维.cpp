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
	char a[80];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')&&a[i+1]==' ')
		{
			j++;
		}
	}
	printf("%d",j+1);
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
/*#include <stdio.h>
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
}*/
//#include <stdio.h>
//int  main()
//{	
//    int a,b;
//	int sum;
//
//	
//	scanf("%d%d",&a,&b);
//	sum=a+b;
//	
//	printf("sum=%d\n",sum);
//	return 0;
//}
//#include <stdio.h>
//int  main()
//{   int a,b;
//	scanf("%d%d",&a,&b);
//	if (a==b)
//	{
//		printf("a和b相等\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int  main()
//{  
//	int  a,b;
//	scanf("%d%d",&a,&b);
//	if (a==b)
//	{	a++;
//    	b++;
//	}
//	printf("a=%d,b=%d",a,b);
//	return  0;
//}
//#include <stdio.h>
//int  main()
//{  double sum;
//	sum=(double)1+(double)1/2+(double)1/3;
//	printf("%.2f",sum);
//  
//	return  0;
//}
//#include <stdio.h>
//int main()
//{	double faHeight,moHeight,Fheights=0,Mheights=0,Fheightd=0,Mheightd=0,Fheight,Mheight;
//	char sex,sports,diet;
//	printf("The father and mother Height:");scanf("%lf%lf",&faHeight,&moHeight);
//	printf("The sex is:");scanf(" %c",&sex);
//	printf("The sports is:");scanf(" %c",&sports);
//	printf("The diet:");scanf(" %c",&diet);
//	if(sex=='F')
//	{	Fheight=(faHeight*0.923+moHeight)/(double)2;	
//	}
//	if(sex=='M')
//	{
//		Mheight=(faHeight+moHeight)*0.54;	
//	}
//	if(sports=='Y')
//	{
//		Fheights=Fheight*0.02;
//		Mheights=Mheight*0.02;
//	}
//	if(diet=='Y')
//	{
//		Fheightd=Fheight*0.015;
//		Mheightd=Mheight*0.015;	
//	}
//	if(sex=='F')
//	{
//		printf("Fheight=%.2lf",Fheight+Fheights+Fheightd);
//	}
//	else {
//		printf("Fheight=%.2lf",Mheight+Mheights+Mheightd);
//	}
//	return 666;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{	float a,c;
//	float sum=0;
//	char b;
//    scanf("%f%c%f",&a,&b,&c);
//    switch(b)
//    {	case '+':sum=a+c;printf("%.2f",sum);break;
//    	case '-':sum=a-c;printf("%.2f",sum);break;
//    	case '*':sum=a*c;printf("%.2f",sum);break;
//    	case '/':{if(c==0||fabs(c)<=1e-7)
//    				{
//    				printf("除数不能为0"); 
//					}
//				  else {sum=a/c;printf("%.2f",sum);}
//			break;
//		}
//    				
//		default:printf("运算符有误");
//	} 
//	return 666;
//}
//#include <stdio.h>
//int  main()
//{
// 	int i=1;
// 	int sum=0;
//
// 	while (i<=100)
// 	{
// 		sum+=i;
// 		i++;
//	}
// 	printf("sum=%d\n",sum);
//		return  0;
//}
//#include <stdio.h>
//int main()
//{	int n=1,i,sum=0,result=1;
//	while(n<=10)
//	{
//		sum=sum+2*n;
//		result=result*(2*n-1);
//		n++;
//	}
//	printf("%d %d",sum,result);
//	return 6;
//}
//#include<stdio.h>
//int  main()
//{
//    int i, j;
//    for(i=1; i<=4; i++)
//    {
//        for(j=1; j<=2*i-1; j++)
//        {
//            printf("%d",j);
//        }
//        printf("\n"); 
//    }
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i,j;
//	for(i=1;i<10;i++)
//	{
//		for(j=1;j<=i;j++)
//			printf("%dX%d=%d ",j,i,i*j);
//		printf("\n");
//	}
//	return 66;
//}
//#include <stdio.h>
//int main()
//{	int money,one,tow,five,i=0;
//	scanf("%d",&money);
//	for(five=20;five>0;five--)
//		for(tow=50;tow>=0;tow--)
//			for(one=100;one>=0;one--)
//				{
//					if(((5*five+2*tow+1*one)==money)&&(tow!=0&&one!=0))
//					{
//						printf("%d %d %d\n",five,tow,one);
//						i++;
//					}
//				}
//	printf("%d",i);
//	return 66;
//}
//#include <stdio.h>
//int  main(void)
//{
//	int a[5]={5,4,3,2,1};
//	int i,sum;
//	for (i=0;i<5;i++)
//	{
//		sum=sum+a[i];
//	}
//	printf("sum=%d\n",sum);
//	return  0;
//}
/*#include<stdio.h>
long fact(long a);

int main()
{
	long n,result=0;
    long i;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
    	result=result+fact(i);
    }
    printf("1!+2!+...+n!=%ld",result);
    return 66;
}
long fact(long a)
{	int res;
	if(a==1)
	{
		res=1;
	}
	else 
	{
		res=a*fact(a-1);
	}
	return res;
}*/
/*#include <stdio.h>
int  max(int a,int b)
{	int m; 
	if(a>b)
     m=a;
    else
     m=b;
	return m;
}
int  main()
{
	int  max1,x,y;

	printf("输入两个整数，用空格隔开：");
	scanf("%d%d",&x,&y);
	max1=max(x,y);
	printf("max=%d\n",max1);
	return   0;
}*/
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXNUM 40
//void inputScore(float score[],int N);
//float avgScore(float score[],int N);
//int main()
//{
//    float score[MAXNUM],avg;
//    int N;
//    scanf("%d",&N);
//    /******添加对N的合法性检查的代码，若N不在2-40范围，则输出：输入错误，并退出程序******/
//    if(N<2||N>40)
//    {
//    	printf("输入错误");
//    	return 0;
//	}
//    /*******end*************************************************************************/
//    inputScore(score,N);
//    avg=avgScore(score,N);
//    printf("平均成绩为%.2f",avg);
//    return 0;
//}
///******请根据任务要求在下面添加定义上面两个函数的代码*******/
//void inputScore(float score[40],int N)
//{	int i;
//	for(i=0;i<N;i++)
//	{
//		scanf("%d",score[i]);
//		if(score[i]<0||score[i>100])
//		{
//			printf("请重新输入\n");
//			score[i]=0;
//			i--; 
//		}
//	}
//}
//float avgScore(float score[40],int N)
//{
//	int i,sum;
//	for(i=0,sum=0;i<N;i++)
//	{
//		sum=sum+score[i];
//	}
//	return (float)sum/N;
//}
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXNUM 40
void initClass(int  score[], int num);
float  avgClass(int  score[], int num);
int main()
{
    float avg;
    int score[MAXNUM],num;
    scanf("%d",&num);
    if(num<2||num>40)
    {
    	printf("输入错误");
    	return 0;
	}
    initClass(score,num);
    avg=avgClass(score,num);
    printf("平均成绩为%.2f",avg);
    return 0;
}
void initClass(int  score[MAXNUM], int num)
{	int i;
	srand((unsigned int)time(NULL));
	for(i=0;i<num;i++)
	{
		score[i]=rand()%101;
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",score[i]);
	}
}
float  avgClass(int  score[MAXNUM], int num)
{
	int i;
	float sum;
	for(i=0,sum=0;i<num;i++)
	{
		sum=sum+score[i];
	}
	return sum/num;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int  AddTest(int,int,int);
int main()
{
	int i,a,b,grade,result;
	srand((unsigned int)time(NULL));
	for(i=0,grade=0;i<N;i++)
	{
		a=rand()%10+1;
		b=rand()%10+1;
		printf("Please add tow int: %d + %d = ",a,b);
		scanf("%d",&result);
		if(AddTest(a,b,result)==1)
		{
			printf("Right!\n");
			grade++;
		}
		else printf("Not correct!\n");
	}
	printf("The end grade is:%d\n",grade*10);
	printf("The false text number is:%d\n",N-grade);
	printf("本程序由罗维（2100300522）开发"); 
	return 66;
}
int  AddTest(int a,int b,int result)
{
	if(result==(a+b))
	{
		return 1;
	}
	else return 0;
}












