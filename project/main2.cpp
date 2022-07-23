//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{	int i,a[50],j,t;
//	srand(time(NULL));
//	for(i=0;i<50;i++)
//		a[i]=rand()%101;
//	/*for(i=0;i<50;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	printf("ending");
//	printf("%d",i);	
//	for(i=0;i<50;i++)
//	{
//		for(j=i+1;j<50;j++)
//			if(a[i]>a[j])
//				{	t=a[i];
//					a[i]=a[j];
//					a[j]=t;
//				}
//		printf("%d",a[i]);
//		printf("\n");
//	}
//	printf("ending");
//	printf("%d",i);	*/
//	for(i=0;i<23;i++)
//	{
//		for(j=i+1;j<50;j++)
//			if(a[i]>a[j])
//				{	t=a[i];
//					a[i]=a[j];
//					a[j]=t;
//				}
//		/*printf("%d",a[i]);
//		printf("\n");*/
//	}
////	printf("ending");
//	printf("%d",a[23]);			
//	return 666;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{	int a[60],i,j,t=0,b[60];
//	srand(time(NULL));
//	for(i=0;i<60;i++)
//	{
//		a[i]=rand()%(180-150+1)+150;
//		b[i]=a[i];
//	}
//	/*for(i=0;i<60;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	printf("%dedding",i);*/
//	for(i=0;i<24;i++)
//		for(j=i+1;j<24;j++)
//			if(a[i]>a[j])
//			{	t=a[j];
//				a[j]=a[i];
//				a[i]=t;	
//			}
//	/*for(i=0;i<24;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	printf("%d",i);*/
//	for(i=24;i<60;i++)
//		for(j=i+1;j<60;j++)
//			if(a[i]>a[j])
//			{	t=a[j];
//				a[j]=a[i];
//				a[i]=t;	
//			}
//	for(i=0;i<60;i++)
//		{	for(j=0;i<60;j++)
//		{
//			if(a[i]==b[j])
//			{
//				b[j]=0;
//				break;
//			}
//		}
//			printf("%2d(%d) ",a[i],j+1);
//			if((i+1)%6==0)
//			{
//				printf("\n");
//			}
//		}
//	/*for(i=24;i<60;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	printf("%d",i);*/
//	/*for(i=0;i<4;i++)
//		for(j=0;j<6;j++)
//		{
//			b[i][j]=a[t];
//			t++;
//		}*/
//	/*for(i=0;i<4;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			printf("%d ",b[i][j]);
//		}
//			printf("\n");
//	}*/
//	/*for(i=4;i<10;i++)
//		for(j=0;j<6;j++)
//		{
//			b[i][j]=a[t];
//			t++;
//		}
//	for(i=0;i<10;i++)
//		{
//			for(j=0;j<6;j++)
//			{
//				printf("%d ",b[i][j]);
//			}
//			printf("\n");
//		}*/
//	return 666;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{	int a[60],i,j,t=0,b[60];
//	srand(time(NULL));
//	for(i=0;i<60;i++)
//	{
//		a[i]=rand()%(180-150+1)+150;
//		b[i]=a[i];
//	}
//	for(i=0;i<24;i++)
//		for(j=i+1;j<24;j++)
//			if(a[i]>a[j])
//			{	t=a[j];
//				a[j]=a[i];
//				a[i]=t;	
//			}
//	for(i=24;i<60;i++)
//		for(j=i+1;j<60;j++)
//			if(a[i]>a[j])
//			{	t=a[j];
//				a[j]=a[i];
//				a[i]=t;	
//			}
//	for(i=0;i<60;i++)
//		{	for(j=0;i<60;j++)
//		{
//			if(a[i]==b[j]) //找编号 
//			{
//				b[j]=0;
//				break;
//			}
//		}
//			printf("%2d(%d) ",a[i],j+1);
//			if((i+1)%6==0)
//			{
//				printf("\n");
//			}
//		}
//	return 666;
//}
/*#include <stdio.h>
#include <string.h>
int main()
{	char lchars[80],schars[80],middle[80];
	int i,j=0;
	printf("Please input a long char:");gets(lchars);
	printf("Please input a short char:");gets(schars);
	
	for(i=0;i<(strlen(lchars)-strlen(schars));i++)	
	{
		for(i;i<strlen(schars);i++)
	{
		middle[i]=lchars[i];
	}
	printf("%d",i);
	if(strcmp(middle,schars)==0)
	{	j++;
		printf("p=%d\n",i-strlen(schars)+1);	
	}
	i=i-strlen(schars);
	//printf("%d",i);

	}
	
	

	return 66;
}*/
/*#include <stdio.h>
#define N 4
int f(int);
int main()
{
	printf("%d",f(N));
	return 6;
}
int f(int n)
{	int i,sum=0;
	if(n==1) return 1;
	if(n==2) return 1;
	if(n>2){
		for(i=1,n;n>=2;i++,n--)
		{
			sum=f(n-1)*f(i)+sum;
		}
		return sum;
	}
}*/
/*#include <stdio.h>

int f(int);
int h(int,int);
int main()
{	int m=5,n=3;
	printf("%d",h(m,n));
	return 66;
} 
int h(int m,int n)
{	int Cmn;
	return Cmn=f(m-1)/f(n-1)/f(m-n)*m/n;
	
}
int f(int n)
{	int sum;
	if(n==0) return 1;
	if(n==1) return 2;
	if(n>2) return sum=f(n-1)*n;
}*/
//项目：归并排序 
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void input(int[],int);
void output(int[],int);
void score(int[],int,int);
void hebing(int[],int,int,int);
int main()
{	int p[N];
	input(p,N);
	printf("before\n");
	output(p,N);
	score(p,0,N-1);
	output(p,N);
	return 66;
}
void score(int p[],int l,int r) 
{
	int mid;
	if(l>=r) return;//终止条件 
	mid=(l+r)/2;
	score(p,l,mid);
	score(p,mid+1,r);
	hebing(p,l,r,mid);			
}
void hebing(int p[],int l,int r,int mid)
{
	int tp[100],i,j,k=0;
	i=l,j=mid+1;
	while(i<=mid&&j<=r)
	{
		if(p[i]>p[j])
		{
			tp[k]=p[j];
			j++;
		}
		else {
			tp[k]=p[i];
			i++;
		}
		k++;
	}
	while(i<=mid){tp[k]=p[i];k++;i++;}
	while(j<=r){tp[k]=p[j];k++;j++;}
	for(k=0,i=l;i<=r;i++,k++){//有问题 没有普遍性 注意传入的参数 
		p[i]=tp[k];
	}
}



void input(int p[],int)
{	int i;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		p[i]=rand()%10;
	}
}
void output(int p[],int)
{	int i;
	for(i=0;i<N;i++)
	{
		printf(" %2d ",p[i]);
	}
	printf("\n");
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int score(int p[],int,int);
//void input(int p[],int);
void output(int p[],int);
int main()
{	int p[10]={0,1,5,9,5,5,5,63,9,9},k,N=10;
	//input(p,N);
	output(p,N);
	repeat:
		printf("k=");scanf("%d",&k);
		printf("the %d min is:%d\n",k,score(p,N,k));
	goto repeat;
	return 66;
}
int score(int p[],int N,int k)
{	int count1,count2,i,j;
	for(i=0;i<N;i++)
	{	count1=0,count2=0;
		for(j=0;j<N;j++)
		{
			if(p[i]>p[j]){
				count1++;
			}
			if(p[i]==p[j]){
				count2++;   //括号太乱了，导致有些括号根本不知道是那个 
			}
			}
		if(k<=count1+count2&&k>=count1+1){
			break;
	}
}
	printf("%d\n",i);
	return p[i];

}
void output(int p[],int N)
{	int i;
	for(i=0;i<N;i++)
	{
		printf(" %2d ",p[i]);
	}
	printf("\n");
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input(int [],int);
void output(int [],int);
int score(int [],int,int);
int main()
{	int N=10,p[N]={1,5,5,6,9,5,6,75,16,1},k;
	//input(p,N);
	output(p,N);
	rep:
		printf("the k is=");scanf("%d",&k);
		printf("before");
		printf("the %d min is:%d\n",k,score(p,N,k));
	goto rep;
	return 66;
}
int score(int p[],int N,int k)
{
	int count1=0,count2=0,i,j;
	for(i=0;i<N;i++)
	{	count1=0,count2=0;
		for(j=0;j<N;j++)
		{
			if(p[i]>p[j]) {count1++;}
			if(p[i]==p[j]){count2++;}
		}
		if(k<=count1+count2&&k>=count1+1) break;
	}
	return p[i];
}
void input(int p[],int N)
{	int i;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		p[i]=rand()%10;
	}
}
void output(int p[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf(" %d ",p[i]);
	}
	printf("\n");
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input(int [],int);
void output(int [],int);
void score(int [],int,int);
void hebing(int[],int,int,int);
int main()
{	int N=10,p[N]={1,5,5,6,9,5,6,75,16,1};
	//input(p,N);
	output(p,N);
	printf("before\n");
	score(p,0,N-1);
	output(p,N);
	return 66;
}
void score(int p[],int l,int r)
{	int mid;
	if(l>=r) return;//关键 
	mid=(l+r)/2;
	score(p,l,mid);
	score(p,mid+1,r);
	hebing(p,l,r,mid);
	
}
void hebing(int p[],int l,int r,int mid)
{
	int tp[100],k,i,j;
	for(i=l,j=mid+1,k=0;i<=mid&&j<=r;k++)
	{
		if(p[i]>p[j]){tp[k]=p[j];j++;}
		else {tp[k]=p[i];i++;}
	}
	while(i<=mid) {tp[k]=p[i];i++;k++;}
	while(j<=r) {tp[k]=p[j];j++;k++;}
	for(k=0,i=l;i<=r;i++,k++)
	{
		p[i]=tp[k];
	}
}
void input(int p[],int N)
{	int i;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		p[i]=rand()%10;
	}
}
void output(int p[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf(" %d ",p[i]);
	}
	printf("\n");
}*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
///*******Begin*******/
//// 此处应有函数声明
//int IsPrimeNumber(long n);
//int hws(long n);
//
///*******End********/
//int main()
//{	
//    long n,tp[3]={1,1,2},i,j;
//    scanf("%ld",&n);
//	/*******Begin*******/
//	// 此处应能调用所写的函数获得第一个大于n的素数与回文数
//	for(n=n+1;;n++)
//	{	if(IsPrimeNumber(n)==1&&hws(n)==1)
//			break;
//	}
//	printf("%d",n);
//	/*******End********/
//	
//    return 0;
//}
//
///*判断n是否素数,若是素数,返回1,否则返回0*/
//int IsPrimeNumber(long n)
//{	int i,flag=1;
//	/*******Begin*******/
//	for(i=2;i<n/2;i++)
//	{
//		if(n%i==0) flag=0;
//		
//	}
//	if(flag==0) return 0;
//	if(flag==1) return 1;
//	
//	
//	
//	/*******End********/
//}
///*判断n是否回文数,若是回文数,返回1,否则返回0*/
//int hws(long n)
//{	int tp[10],i,j,flag=1;
//	/*******Begin*******/
//	for(i=0;;i++)
//	{
//		if(n==0)break;
//		tp[i]=n%10;
//		n=n/10;	
//	}
//	for(i=i-1,j=0;i>=j;j++,i--)
//	{
//		if(tp[j]!=tp[i]) flag=0;
//	}
//	if(flag==0) return 0;
//	if(flag==1) return 1;
//	
//	/*******End********/
//}
/*#include <stdio.h>
int main()
{	int tp[10],i,j,flag=1,n=211;
	for(i=0;;i++)
	{
		if(n==0)break;
		tp[i]=n%10;
		n=n/10;	
	}
	for(i=0;i<3;i++)
	{
		printf("%d",tp[i]);
	}
	for(i=i-1,j=0;i>=j;j++,i--)
	{	//printf("%2d %2d %2d %2d\n",i,j,tp[i],tp[j]);
		if(tp[j]!=tp[i])
		{
			flag=0;
		}
	}
	printf("%d",flag);
	return 66;*/
	
//#include <stdio.h>
//#include <stdlib.h>
//long Fabonaci(int n);
//int main()
//{	int n;
//    /****************Begin*************/
//	printf("Input n:");scanf("%d",&n);
//	printf("%d",Fabonaci(n));
//	if(n<=0) printf("Input error");
//	else printf("%d",Fabonaci(n));
//    /****************End***************/
//    return 0;
//}
//
//
//long Fabonaci(int n)
//{	int fabnaic;
//     /****************Begin*************/
//	if(n==1) return 1;
//	if(n==2) return 1;
//	if(n>2) return fabnaic=Fabonaci(n-1)+Fabonaci(n-2);
//    /****************End***************/
//}
///*#include <stdio.h>
//#include <stdlib.h>
//int MaxCommonFactor(int a, int b);
//
//int main()
//{	int x,y;
//    /****************Begin*************/
//	printf("Input a,b:");scanf("%d,%d",&x,&y);
//	if(x<=0||y<=0)
//	{
//		printf("Input error!");
//	}
//	else printf("MaxCommonFactor = %d",MaxCommonFactor(x,y));
//    /****************End***************/
//    return 0;
//}
//
//int MaxCommonFactor(int a, int b)
//{
//    /****************Begin*************/
//	if(a==b) return a;
//	if(a>b)
//	{	a=a-b;
//		MaxCommonFactor(a,b);
//	}
//	if(a<b)
//	{
//		b=b-a;
//		MaxCommonFactor(a,b);
//	}
//    /****************End***************/
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define M 10
//#define N 10
//void InputMatrix(int a[][N],int m,int n);
//void MatrixMaximum(int a[][N],int m,int n);
//int main()
//{
//    int a[M][N] = {0};
//    int m,n;
//    printf("请输入矩阵的大小（m,n):");
//    scanf("%d,%d",&m,&n);
//    printf("请输入矩阵元素:\n");
//    InputMatrix(a,m,n);
//    MatrixMaximum(a,m,n);
//
//    return 0;
//}
//
//void InputMatrix(int a[][N],int m,int n)
//{
//	int i,j;
///************Begin*************/
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			scanf("%d",&a[i][j]);
//		}
//	}
///************End**************/
//}
//void MatrixMaximum(int a[][N],int m,int n)
//{  int max,i,j;
///************Begin*************/
//	max=a[0][0];
//	int maxi=0,maxj=0;
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			if(max<=a[i][j]){max=a[i][j];maxi=i;maxj=j;}
//		}
//	}
//	printf("max = %d\n",max);
//	printf("maxi = %d, maxj = %d",maxi,maxj);
///************End**************/
//}
//#include <stdio.h>
//#include <string.h>
//#define ARR_SIZE 80
//int main()
//{	char chars[ARR_SIZE]={0},a[ARR_SIZE]={0},b[ARR_SIZE]={0},k;
//	int i,j; 
//    /*********begin*********/
//    gets(chars);
//    for(i=0;;)
//    {	
//    	if(chars[i]!=' '){i++;}
//    	a[i-1]=chars[i-1];
//    	if(chars[i+1]==' '){break;}
//	}
//	a[i]=chars[i];
//	for(k=i+2,j=0;;)
//    {	b[j]=chars[k];
//    	if(chars[k]!=' '){k++;j++;}
//    	if(chars[k+1]=='\0'){break;}
//	}
//	b[j]=chars[k];
//	if(i==j) printf("相等");
//	else  puts(strcat(b,a));
//    /*********end*********/
//}
//#include<stdio.h>
//#define ARR_SIZE 80
//void Squeeze(char str[],char ch);
//
//int main()
//{
//    /*********begin*********/
//     char str[ARR_SIZE]={0},ch;
//     gets(str);
//     scanf("%c",&ch);
//     Squeeze(str,ch);
//    /*********end*********/
//}
//
//void Squeeze(char str[],char ch)
//{
//    /*********begin*********/
//     int i,j;
//     char tp[ARR_SIZE];
//     for(i=0,j=0;str[i]!='\0';)
//     {
//     	if(str[i]==ch)
//     	{
//     		tp[j]=str[i+1];//i ma happy
//     		j++;
//     		i+=2;
//		}
//		else {tp[j]=str[i];j++;i++;}
//	 }
//	 for(i=0;i<j;i++)
//	 {
//	 	printf("%c",tp[i]);62fe0c 62fe0c
//	 }
//    /*********end*********/
//}
/*#include <stdio.h>
#include <bits/stl_algobase.h>
using namespace std;
int max(int,int);
int main()
{	int a[5]={1,5,1,2,1},i;
	sort(a+1,a+6);
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 666;
}*/
/*#include <stdio.h>
#include <string.h>
#define M 7
#define N 20
int main()
{
	char *p[M],a[M][N]={"Monday","Tuesday","Wednesday","Thursday","Friday","Startday","Sunday"},*tp=NULL;
	int i,j;
	for(i=0;i<M;i++)
	{
		p[i]=a[i];
	}
	for(i=0;i<M;i++)
		for(j=i+1;j<M;j++)
		{
			if(strcmp(p[i],p[j])>0) //区别数字是小的放前面，字母是大的放前面 B>A
			{
				tp=p[i];p[i]=p[j];p[j]=tp;
			}
		}
		
	for(i=0;i<M;i++)	puts(p[i]);
	return 66;
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{	char a="abc",b="bbb";
char *c=&a,*d=&b;
	int res;
	res=strcmp(a,b);
	printf("%d",res);
	return 66;
}*/
//制作一个学生卡 
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct St_Card
{
	char name[20];
	char sex;
	int cls;
	char xh[11];
};
int main()
{
	struct St_Card k1,k2;
	gets(k1.name);
	scanf("%c",&k1.sex);
	scanf("%d",& k1.cls);fflush(stdin);
	gets(k1.xh);
	printf("姓名	性别	班级	学号\n");
	printf("%s	%c	%d	%s\n",k1.name,k1.sex,k1.cls,k1.xh);
	k2=k1;
	printf("%s	%c	%d	%s\n",k2.name,k2.sex,k2.cls,k2.xh);
	//printf("%s",k1.xh);
	return 66;
}*/
//求两点间的距离 
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
double d(int,int);
struct points
{
	int x;
	int y;
};
int main()
{	double res;
	struct points a,b;
	scanf("%d,%d",&a.x,&a.y);fflush(stdin);
	scanf("%d,%d",&b.x,&b.y);
	res=d(a.x,b.x)+d(a.y,b.y);
	printf("%.2f",sqrt(res));
	return 66; 
}
double d(int a,int b)
{
	return (a-b)*(a-b);
}*/
//#include <stdio.h>
//#define N 10
//void reverse(int *p, int a, int b)
//{
//	int c;
//	
//	/***** 请在以下一行填写代码 *****/
//	while (a<b)
//	
//	{
//		c=*(p+a);
//		
//	/***** 请在以下一行填写代码 *****/
//		*(p+a)= *(p+b)    ;
//		
//		*(p+b)=c;
//		b--;
//		a++;
//	/***** 请在以下一行填写代码 *****/
//				;
//				
//	}
//}
//int main()
//{
//	int a[N], i;
//	for (i=0; i<N; i++)
//		
//	/***** 请在以下一行填写代码 *****/
//		scanf("%d",&a[i]);
//	
//	reverse(a, 0, N-1);
//	
//	for (i=0; i<N; i++)
//		
//	/***** 请在以下一行填写代码 *****/
//		printf("%-4d",a[i]);
//		
//	printf("\n");
//	
//	return 0;
//}
//
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//int fun(char *s, int num)
//{
//	char ch;
//	int i, j;
//	for(i = 1 ; i <num-1 ; i++)
//		for(j = i + 1 ; j <num-1 ; j++)
//		{
//	
//		/***** 请在以下一行填写代码 *****/
//			if(s[i]<s[j])
//				
//			{
//				ch = *(s + j);
//				*(s + j) = *(s +i);
//				*(s + i) = ch;
//			}
//		}
//	}
//int main()
//{
//	char s[10];
//
//	scanf("%s",s);
//	
//	/***** 请在以下一行填写代码 *****/
//	fun(s,strlen(s));
//	
//	printf("%s",s);
//	
//	return 0;
//}
//项目：设置一个红绿灯 
/*#include <stdio.h>
#include <string.h>
//#include <unistd.h> sleep(1);
enum tr_led{red,yellow,green};
void wait1s(void);
int main()
{
	enum tr_led led;
	led=green;
	int i;
	while(1)
	{
	switch(led)
	{
		case green:
		{	printf("\r");
			printf("G ");
			for(i=30;i>0;i--)
			{
				printf("%2d",i);
				wait1s();
				printf("\b");printf("\b");
			}
			led=yellow;
			break;
		}
		case yellow:
		{	printf("\r");
			printf("Y ");
			for(i=5;i>0;i--)
			{
				printf("%2d",i);
				wait1s();
				printf("\b");printf("\b");
			}
			led=red;
			break;
		}
		case red:
		{	printf("\r");
			printf("R ");
			for(i=30;i>0;i--)
			{
				printf("%2d",i);
				wait1s();
				printf("\b");printf("\b");
			}
			led=green;
			break;
		}
	}
   }
	return 66;
}
void wait1s(void)
{
	int i,t;
	for(i=1,t=2;i<39999999;i++) {i++;i--;t=t*t;t=t/i;i++;i--;t=t*t;t=t/i;}
}*/
//项目：开发一个RSA加密系统
/*#include <stdio.h>
#include <string.h>
struct FYB
{
	char yw;
	char mw;
};
int main()
{
	struct FYB a[]={{'a','1'},{'o','2'},{'i','3'},{'e','4'},{'u','5'},{'d','6'},{'f','7'},{'t','8'}};
	int i,j;
	char b[80];
	printf("加密表为{'a','1'},{'o','2'},{'i','3'},{'e','4'},{'u','5'},{'d','6'},{'f','7'},{'t','8'}\n");s
	printf("请输入要加密的英文"); 
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		for(j=0;j<8;j++)
		{
			if(b[i]==a[j].yw) b[i]=a[j].mw;
		}
	}
	printf("加密后的英文为"); 
	puts(b);
	return 66;
} */
//#include <stdio.h>
//#include <string.h>
//#define N 5
//#define M 81
//
///***** 以下一行有错误 *****/
//char* fun(char (*sq)[M])//char *a[m][n]
//
//{
//	int i; char *sp;
//	sp=sq[0];
//	for(i=0;i<N;i++)
//		if(strlen( sp)<strlen(sq[i]))
//			sp=sq[i];
//		
///***** 以下一行有错误 *****/
//	return sp;
//	
//}
//int main()
//{
//	char str[N][M], *longest; int i;
//	
//	
//	for(i=0; i<N; i++)
//		scanf("%s",str[i]);
//	
//	printf("The %d string :\n",N);
//	
//	for(i=0; i<N; i++) 
//		puts(str[i]);
//	longest=fun(str);
//		
//	printf("The longest string :\n");
//	puts(longest);
//	
//	return 0;
//}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch,sh;
	fp=fopen("ceshi.txt","w");
	if(fp==NULL)
	{
		printf("error");
		perror("");
	}
	//ch=fgetc(fp);
	
	for(;;)
	{
		scanf("%c",&sh);
		if(sh=='#')
			break;
		fputc(sh,fp);
//		if(fputc(sh,fp)==EOF)
//			printf("error");
	}
	fclose(fp);
	fp=fopen("ceshi.txt","r");
	while(feof(fp)==0)
	{
		ch=fgetc(fp);
		printf("%c",ch);
		if(ferror(fp)!=0)
		{
			perror("error");
			break;
		}
	}
	return 66;
}*/
/*#include <stdio.h>
int main()
{
	int *a[2],b[2]={1,2},i;
	for(i=0;i<2;i++) a[i]=(b+i);

	return 66;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void read();
void write();
int main()
{
	//FILE *fp;
//	fp=fopen("ceshi.txt","r");
	write();
	read();
	return 66;
}
void read()
{
	FILE *fpr;
	char ch;
	fpr=fopen("ceshi.txt","r");
	if(fpr==NULL)
	{
		perror("error is");
	}
	while(feof(fpr)==0)
	{
		ch=fgetc(fpr);
		printf("%c",ch);
		if(ferror(fpr)!=0)
		{
			perror("error is");
			break;
		}
	}
	fclose(fpr);
}
void write()
{
	FILE *fpw;
	fpw=fopen("ceshi.txt","w");
	char ch;
	while(1)
	{
		scanf("%c",&ch);
		if(ch=='#') break;
		fputc(ch,fpw);
	}
	fclose(fpw);
}*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void read(char*[]);
//int main(int count,char* avgc[])//int count,char* avgc[]
//{
//	FILE *fp1,*fp2;
//	char ch,f1,f2;
//	//char *avgc[]={"ceshi.txt","ceshi2.txt"};
//	//strcpy(f1,avgc[1]);strcpy(f2,avgc[2]);
//	fp1=fopen(avgc[1],"r"),fp2=fopen(avgc[2],"w");
//	if(fp1==NULL)
//	{
//		perror("fp1 error is");
//	}
//	if(fp2==NULL)
//	{
//		perror("fp2 error is");
//	}
//	while(!feof(fp1))
//	{
//		ch=fgetc(fp1);
//	//	printf("%c",ch);
//		fputc(ch,fp2);
//	}
//	fclose(fp1);fclose(fp2);
//	read(avgc);
//	return 66;
//}
//void read(char*avgc[])
//{
//	FILE *fpr;
//	char ch;
//	fpr=fopen(avgc[2],"r");
//	if(fpr==NULL)
//	{
//		perror("fpr error is");
//	}
//	while(feof(fpr)==0)
//	{
//		ch=fgetc(fpr);
//		printf("%c",ch);
//		if(ferror(fpr)!=0)
//		{
//			perror("error is");
//			break;
//		}
//	}
//	fclose(fpr);
//}
/*#include <stdio.h>
#include <stdlib.h>
#define N	3
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node NODE; 
void input(NODE*,int);
void output(NODE*);
int dele(NODE*,int);
int main()
{
	NODE *head=NULL;
	int x,y;
	
	if((head=malloc(sizeof(NODE)))==NULL)
	{
		printf("malloc error");
	}
	head->data=0;
	head->next=NULL;
	printf("now creat a list");
	printf("x=");scanf("%d",&x);
	while(x>0)
	{
		input(head,x);
		printf("x=");scanf("%d",&x);
	}
	printf("the list is");
	output(head);
	printf("input delect list:");
	printf("y=");scanf("%d",&y);
	while(y>0)
	{
		if(dele(head,y)==-1)
			printf("delect error");
		else output(head);
		printf("y=");scanf("%d",&y);
	}
	return 66;
}
void input(NODE *h,int x)
{
	NODE *newp,*cp;
	if((h=malloc(sizeof(NODE)))==NULL)
	{
		printf("malloc error");
	}
	h->data++;
	newp->data=x;
	newp->next=NULL;
	cp=h;
	while(cp->next!=NULL) cp=cp->next;
	cp->next=newp;
}
void output(NODE *h)
{
	while(h->next!=NULL)
	{
		h=h->next;
		printf("%d->",h->data);
	}
}
int dele(NODE *h,int y)
{
	NODE *pre,*cur;
	pre=h;cur=h->next;
	while(cur==NULL&&cur->data!=y)
	{
		pre=cur;
		cur=cur->next;
	}
	if(cur==NULL) return -1;
	pre->next=cur->next;
	free(cur);
	return 0;
}
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 12
//#define M 3
//struct Node
//{
//	int data;
//	struct Node *next;
//};
//typedef struct Node NODE;
//void cr_list(NODE*,int);
//void output(NODE*);
//NODE* de_list(NODE*,int);
//
//int main()
//{
//	NODE *head=NULL,*tp;
//	int x,y;
//	head=(NODE*)malloc(sizeof(NODE));
//	head->data=0;
//	head->next=NULL;
//	for(x=1;x<=N;x++) cr_list(head,x);
//	output(head);
//	for(;head->data!=1;)
//	{
//		head->next=de_list(head,M);
//		output(head);
//	}
//	return 66;
//}
//void cr_list(NODE*h,int x)
//{
//	NODE *newp,*tp=h;
//	int count;
//	newp=(NODE*)malloc(sizeof(NODE));
//	newp->data=x;
//	newp->next=h->next;
//	for(count=0;count<h->data;count++) tp=tp->next;
//	tp->next=newp;
//	h->data++;
//}
//void output(NODE*h)
//{
//	NODE *tp=h;
//	int count;
//	for(count=1;count<=h->data;count++)
//	{
//		tp=tp->next;
//		printf("%d->",tp->data);
//	}
//	printf("\n");
//}
//NODE* de_list(NODE*h,int y)
//{
//	int i;
//	NODE *pre=h,*cur=h->next;
//	for(i=1;i<y;i++)
//	{
//		pre=pre->next;
//		 cur=cur->next;
//	}
//	pre->next=cur->next;
//	free(cur);
//	h->data--;
//	return pre->next;
//	
//}
#include <stdio.h>
#include <stdlib.h>
#define Maxszie 100
typedef struct{
	int *arr;
	int length;
}SP;
void Insitlist(SP*);
void crelist(SP*,int);
int main()
{
	SP *L;
	Insitlist(L);
	
	return 66;
}
void Insitlist(SP *L)
{
	(*L).arr=(int*)malloc(sizeof(Maxszie));
	if((*L).arr==NULL) printf("error");
}























