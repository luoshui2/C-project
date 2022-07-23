//#include <stdio.h>
//#include <math.h>
//int main()
//{	int a,b,c;
//	printf("a=");
//	scanf("%d",&a);
//	printf("a=%d\n",a);
//	printf("b=");
//	scanf("%d",&b);
//	printf("a=%d\n",a%3);
//	printf("a=%d",a);
//	c=a>b?a:b;
//	printf("c=%d",c);e
//	return 666;
//}
//#include <stdio.h>
//int main()
//{	char a,b;
//	b=8;
//	//printf("a=");
//	//scanf("%d",&a);
//	printf("gello%c ",b);
//	return 666;
//}
//#include <stdio.h>
//int main()
//{	//printf("int=%d\nchar=%d\nfloat=%d\ndouble=%d\nshort int=%d\nlong int=%d\nlong long int\
//=%d\nunsigned int=%d",sizeof(int),sizeof(char),sizeof(float),sizeof(double),sizeof(short int),\
//sizeof(long int),sizeof(long long int),sizeof(unsigned int));
//	printf("hello\thello");
//	
//	return 666;
//}
//#include <stdio.h>
//int main()
//{	printf("   cuhk \n\
//	dhfkjshfjf\n\
//uqwdhwufho\n\
//uiWHFEWHIOF\n\
//suihfuiwkss\n");
//	return 666;	
//}
#include <stdio.h>
#include <math.h>
//int main()
//{	int a,b,c,d,f;
//	printf("input 1 int:");
//	scanf("%d",&a);
//	b=a%10*pow(2,0);
//	c=a/10%10*pow(2,1);
//	d=a/100%10*pow(2,2);
//	f=a/1000%10*pow(2,3);
//	printf("result=%d",b+c+d+f);
//	return 666;
// } 
#include <stdio.h>
//int main()
//{	int a,b;
//	printf("a=");scanf("%d",&a);
//	printf("b=");scanf("%d",&b);
//	if(b!=0)
//		printf("result=%d",a/b);
//	else printf("This not exit result");
//	return 666;
//}
//int main()
//{	int a,b,max;
//	printf("a=");scanf("%d",&a);
//	printf("b=");scanf("%d",&b);
//	//max=a;
//	if(a>b) max=a;
//		//printf("max=%d",max);
//	//else 
//		//printf("max=%d",b);
//	//printf("max=%d",max);
//	else max=b;
//	printf("max=%d",max);
//	return 666;
//}
//int main()
//{	int a,b;
//	printf("a=");scanf("%d",&a);
//	printf("b=");scanf("%d",&b);
//	if(a>b)
//	{ if(a>1)
//		{if(a>2)
//			printf("%d",a);
//		else printf("error");
//		}
//	}
//	else printf("error");
//	return 666;
//}
//int main()
//{	int a;
//	printf("a=");scanf("%d",&a);
//	//printf("b=");scanf("%d",&b);
//	switch(a)
//	{	case 1:printf("a\n");break;
//		case 2:printf("b\n");break;
//		case 3:printf("c\n");break;
//		default:printf("ffff\n");
//	}
//	return 666;
//	
//}
//int main()
//{	int year,month,days;
//	printf("year=");scanf("%d",&year);
//	printf("month=");scanf("%d",&month);
//	switch(month)
//	{	case 1:days=31;break;
//		case 2:if(year%400==0||(year%4==0&&year%100!=0)) days=29;
//				else days=28;break;
//		case 3:days=31;break;
//		case 4:days=30;break;
//		case 5:days=31;break;
//		case 6:days=30;break;
//		case 7:days=31;break;
//		case 8:days=31;break;
//		case 9:days=30;break;
//		case 10:days=31;break;
//		case 11:days=30;break;
//		case 12:days=31;break;
//		default:days=0;
//		
//	}
//	if(days==0)
//		printf("This month is not exit.");
//	else printf("%d year %d month has %d days",year,month,days);
//	return 666;
//}

//项目：输入N个书求和 
//#include <stdio.h>
//int main()
//{	int n,i,x,sum;
//	printf("Please input n int to sum:");scanf("%d",&n);
//	i=0;
//	sum=0;
//	while(i<n)
//	{
//		printf("input x:"),scanf("%d",&x);
//		sum=sum+x;
//		i++;
//	}
//	printf("the sum:%d",sum);
//	return 666;	
//}
 //项目：将一个数倒序输出 
//#include <stdio.h>
//int main()
//{	int n,x;
//	printf("Please input 1 int:");scanf("%d",&n);
//	while(n>0)
//	{	x=n%10;
//		printf("%d",x);
//		n=n/10;
//	}
//	return 666;
//}
//项目：判断一个数是否为一个素数 
#include <stdio.h>
//int main()
//{	int n,i;
//	
//	printf("Please input 1 int:");scanf("%d",&n);
//	if(n>3)
//	{
//	for(i=2;i<=n/2;i++)
//	{	if(n%i==0)
//		{	printf("this int is not a p:");break;
//		}
//		else printf("this int is a p:");
//	}
//	}
//	else printf("this int is a p:");
//	return 666;
//}
//项目：制作一个9*9乘法表 
//#include <stdio.h>
//int main()
//{	int a,b,sum;
//	a=1;
//	for(a=1;a<10;a++)
//	{
//		if(b<=a)
//		{	for(b=1;b<=a;b++)
//			{	sum=a*b;
//				printf("%d*%d=%d",a,b,sum);
//				printf(" ");
//			} 
//			b=1;
//		}
//		printf("\n");
//	}
//	return 66;
//}
//项目：输入N个同学的成绩求和
//#include <stdio.h>
//int main()
//{	int n,i,sum,x;
//	sum=0;
//	printf("Please input N stdents grade:");scanf("%d",&n);
//	for(i=0;i<n;i++)
//		{	printf("Please input grade x:");scanf("%d",&x);
//			if(x<0)
//			{	//printf("the int is error!Please input one int:");scanf("%d",&x);
//				continue;
//			}
//			sum=x+sum;
//			printf("%d",i);
//		}
//	printf("the whole sum=%d",sum);
//	return 666;
// }
//#include <stdio.h>
//int main()
//{	int k,n,sum,x,m,i,flag;
//	sum=0,m=0;
//	printf("Input n(10≤n≤10000) and k(1≤k≤10):");scanf("%d",&n);scanf("%d",&k);
//	for(i=n;i>=2;i--)
//	{	flag=1;
//		for(x=2;x<i/2;x++)
//			{
//				if(i%x==0)
//				{	flag=0;
//					break;
//				}
//							
//			}
//		if(flag==1)
//		{	printf("%d",i);
//			printf(",");
//			sum=i+sum;
//			m++;
//		}
//		if(m==k)
//		{break;
//		}
//	}
//	printf("sum=%d",sum);
//	return 666;
//项目：输入三个数比较大小
//
//int main( )
//{
//    int a, b, c ,min;
//    /********************Begin******************/
//    printf("Input a,b,c:");scanf("%d,%d,%d",&a,&b,&c);
//    if(a<b)
//      min=a;
//    else min=b;
//    if(min<c)
//      min=min;
//    else min=c;
//
//
//
//
//    /********************End********************/
//    printf ("the min number is:%d", min);
//    return 0;
//  }
//项目：求pi
//int main()
//{	int n;
//	double pi,b;
//	pi=0,n=0,b=0;
//	for(;;)
//	{	n++;
//		if(n%2==0)
//			b=-(2*n-1);
//		else b=n*2-1;
//		pi=pi+(double)1/b;
//		if(fabs(pi*4-3)<0.001)
//			break;
//	}
//	printf("pi=%f",pi*4);
//	return 666;
// } 
//应用数组把一个数化为二进制 
//#include <stdio.h>
//int main()
//{	int i,n,a[100];
//	printf("Please input 1 int:");scanf("%d",&n);
//	for(i=0;n>0;i++)
//	{
//		a[i]=n%2;
//		n=n/2;
//	}
//	for(i-=1;i>=0;i--)
//	{
//		printf("%d",a[i]);
//	}
//	return 666;
//	
//}
//项目：斐波拉锲数列 
//#include <stdio.h>
//int main()
//{	int f1,f2,f3;
//	printf("  1  2 ");
//	for(f1=1,f2=2;f3<520;)
//	{	f3=f1+f2;printf("%  d  ",f3);
//		f1=f2;
//		f2=f3;
//		
//	}
//} 
//项目：100元去买100只鸡，公鸡5元/只，母鸡3元/只，小鸡1元/3只
//#include <stdio.h>
//int main()
//{	int gj,mj,xj;
//	for(gj=0;gj<20;gj++)
//	{	for(mj=0;mj<30;mj++)
//			for(xj=0;xj<90;xj++)
//				if(gj+mj+xj==100&&gj*5+mj*3+xj/3==100&&xj%3==0)
//					printf("gj=%d mj=%d xj=%d\n",gj,mj,xj);
//				
//	
//	}
//	return 666;
// } 
//#include <stdio.h>
//int main()
//{	char goodman;
//	int a,b,c,d;
//	for(goodman='A';goodman<'E';goodman++)
//	{
//		if(goodman=='A')
//			a=0;
//		else a=1;
//		if(goodman=='C')
//			b=1;
//		else b=0;
//		if(goodman=='B')  
//			c=1;
//		else c=0;
//		if(goodman=='B')
//			d=0;
//		else d=1;
//		if(a+b+c+d==3)
//			break;}
//	printf("%c",goodman);
//	return 66;
//		
//		
//}
//#include <stdio.h>
//int main()
//{	char goodman;
//	int a,b,c,d;
//	for(goodman='A';goodman<'E';goodman++)
//	{	if((goodman!='A')+(goodman=='C')+(goodman=='B')+(goodman!='B')==3)
//			break;}
//	printf("%c",goodman);
//	return 66;
//}
//#include <stdio.h>
//int main()
//{	int n=555555,i;
//	for(i=999;i>100;i--)
//		if(n%i==0)
//		{	printf("%d",i);
//			break;
//			}	
//	return 666;
//}
//#include <stdio.h>
//int main()
//{	int sum,n,j;
//	for(sum=0,j=0;j<10;j++)
//	{	scanf("%d",&n);
//		if(n>0)
//			sum=sum+n;
//		
//	}
//	printf("%d",sum);
//	return 666;	
//}
//#include <stdio.h>
//int main()
//{
//	int a,d;
//	for(a=1;a<5;a++)
//		for(d=1;d<5;d++)
//			if((6*d+a*4)==26&&a*(a+d)*(a+2*d)*(a+d*3))
//				printf("a=%d,b=%d",a,d);
//	return 666;
//}
//#include <stdio.h>
//int main()
//{	int n,a;
//	for(a=32;a<100;a++)
//	{
//		n=a*a;
//		if(n%10==n/10%10&&n/100%10==n/1000)
//			{
//				printf("%d",n);
//				break;
//			}
//	}
//	return 666;
//}
/*#include <stdio.h>
int main()
{	int a,b,c,d,e,f;
	for(a=0;a<2;a++)
		for(b=0;b<2;b++)
			for(c=0;c<2;c++)
				for(d=0;d<2;d++)
					for(e=0;e<2;e++)
						for(f=0;f<2;f++)
							if(a+b>=1&&a+e+f>=2)





}*/ 
/*#include <stdio.h>
int main()
{
	int a[5]={4,7,9,44,54},b[5]={5,9,10,23,85},c[10]={0},i,j,k;
	for(i=0,j=0,k=0;i<5&&j<5&&k<10;k++)
		{	if(a[i]!=b[j])
			{
				if(a[i]>b[j])
			{	c[k]=b[j];	
				j++;
			}
				
			else{	 c[k]=a[i];
					 i++;
			}
			}
			else {
				c[k]=a[i];
				k++;
				c[k]=a[j];
				i++;
				j++;
			}
			
		}
	for(k=0;k<10;k++)
		printf("  %d",a[k]);
}*/
/*#include <stdio.h>
int main()
{	 int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j,k,b[4][3],c[3][3],s=0;
	 for(i=0;i<3;i++)
	 {	for(j=0;j<4;j++)
	 		b[j][i]=a[i][j];
			
	 }	
	  /*for(i=0;i<4;i++)
	 {	for(j=0;j<3;j++)
	 		printf("%4d",b[i][j]);
		//printf("\n");	
	 }
	 for(i=0;i<3;i++)
	 	for(j=0;j<3;j++)   //矩阵乘法。 
		 	{	s=0;
		 		for(k=0;k<4;k++)
			 	{
				 s=s+a[i][k]*b[k][j];//重要公式 
				}
				c[i][j]=s;
			 }
	for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
			{printf("%4d",c[i][j]);
			}
		printf("\n");	
		}				
	return 66;
}*/
/*#include <stdio.h>
int main()
{	int a[3][2]={{2,3},{1,-2},{3,1}},b[2][3]={{1,-2,-3},{2,-1,0}},k,i,j,s=0,c[3][3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			{	s=0;
				for(k=0;k<2;k++)
				{
					s=s+a[i][k]*b[k][j];
				}
				c[i][j]=s;
			}
	for(i=0;i<3;i++)
	{
		{for(j=0;j<3;j++)
		{
			printf("%4d",c[i][j]);
		}
	 
		}
	printf("\n");}
	return 66;
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{	char a[80]="luoshuitianyi",b[80]="abc",c;
	int i,j;
	//puts(a);
	/*strcpy(b,a);
	printf("%d\n",strlen(b));
	for(i=0;b[i]!='\0';i++);
	printf("%d",i);*/
	/*i=strcmp(a,b);
	printf("%d",i);
	for(i=0,j=12;i!=j;i++,j--)
		{	c=a[i];
			a[i]=a[j];
			a[j]=c;	
		}
	puts(a);
	return 666;
}*/
/*#include <stdio.h>
int main()
{	int a[7]={5,4,7,9,1,2,1},i,j,t;
	for(i=6,j=5;i>0&&j>0;i--,j--)
		if(a[i]<a[j])
		{	t=a[j];
		a[j]=a[i];
		a[i]=t;	
		}
	for(i=0;i<7;i++)
		printf("%d",a[i]);
	return 66;
}*/
/*项目：做一个计算器 
#include <stdio.h>
int my(int,char,int);
int my(int x,char y,int z)
{	int result;
	switch(y)
	{
		case '+':result=x+z;break;
		case '-':result=x-z;break;
		case '*':result=x*z;break;
		case '/':{if(z==0){
			result=1;
			break;
		}
		else result=x/z;
			break;
		}
		case '%':result=x%z;break;
		default:result=1;
	}
	return result;
}
void main()
{
	int a,b,c;
	scanf("%d%c%d",&a,&b,&c);
	my(a,b,c);
	if(my(a,b,c)==1)
	{
		printf("this is a error");
	}
	else printf("%d",my(a,b,c));
	
	
}*/
/*#include <stdio.h>
int main()
{	int f1=1,f2=1,f3,n=5,j;
	for(j=0;j<n-2;j++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("%d",f3);
	return 66;
}*/
/*#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void Input_arrey();
void Swap_arrey();
void Output_arrey();
int main()
{	int a[8];
	Input_arrey(a[8]);
	Output_arrey(a[8]);
	Swap_arrey(a[8]);
	Output_arrey(a[8]);
	return 66;
}
void Input_arrey(int a[8]) 
{	int i;
	srand(time(NULL));
	for(i=0;i<8;i++)
	{
		a[i]=rand()%10;
	}
}
void Swap_arrey(int a[8])
{	int i,j,t;
	for(i=0;i<8;i++)
	{	for(j=i+1;j<8;j++)
		{
			if(a[i]>a[j])
			{	t=a[j];
				a[j]=a[i];
				a[i]=t;
				
			}
		}
		
	}
	
}
void Output_arrey( int a[8])
{	int i;
	for(i=0;i<8;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}*/
/*#include <stdio.h>
int f(int);
int main()
{	int n;
	scanf("%d",&n);
	printf("the result:%d",f(n));
	return 66;
}
int f(int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	else return n*f(n-1);
	
}*/
//迭代和递归求阶乘 
/*#include <stdio.h>
int f(int);
int main()
{	int i,n,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=i*sum;
	}
	printf("%d",sum);
	return 66;
}*/
/*#include <stdio.h>
#include <math.h>
int f(int);
int main()
{	int n,s;
	scanf("%d",&n);
	printf("%d\n",f(n));
	s=pow(2,n);
	printf("%d",s-1);
	return 66;
}
int f(int n)
{
	if(n==1) return 1;
	if(n==2) return 3;
	else return n=f(n-1)*2+1;
}*/
#include <stdio.h>
int main()
{	int i,n,x2=3,sum=0;
	scanf("%d",&n);
	for(i=1;i<n-1;i++)
	{
		sum=2*x2+1;
		x2=sum;
		
	}
	printf("%d",sum);
	return 66;
}






