/*#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{	int a[10]={5,4,3,2,1,0,6,2,2,3},i,len;
	sort(a,a+10);
	for(i=0;i<10;i++)
	{
		printf(" %d ",*(a+i));
	}
	len=unique(a,a+10)-a;
	printf("\n");
	for(i=0;i<7;i++)
	{
		printf(" %d ",*(a+i));
	}
	printf( "\n %d",len);
	return 66;
}*/
//#include <stdio.h>
//#include <string.h>
//
//struct  person
//{
//	char name[8];
//	int count;
//};
//
//int main()
//{
//	int i,j;
//	char name[8];
//	struct  person leader[5]={"zhang",0,"sun",0,"li",0,"yang",0,"zhao",0 };
//
//	for(i=1;i<=10;i++)
//	{
//		/***** 在以下一行填写代码 *****/
//			scanf("%s",name);                    //输入候选人姓名
//					 
//	
//					 
//		 for(j=0;j<5;j++)
//		/***** 在以下一行填写代码 *****/
//			  if(strcmp(name,leader[j].name)==0)       //若第j个候选人名字与输入的名字相同
//			  
//		
//			  
//		/***** 在以下一行填写代码 *****/
//				leader[j].count++;	                        //第j个候选人票数加1
//					   
//
//		
//	}
//	
//	printf("投票结果：\n");
//	printf("姓名      票数\n");
//	for(j=0;j<5;j++)
//		
//		/***** 在以下一行填写代码 *****/
//		 printf("%-10s%d\n",leader[j].name,leader[j].count);     //输出各候选人的名字和票数
//		 
//
//		 
//	return 0;
//}
//#include <stdio.h> 
//typedef struct 
//{
//	char name[10]; 
//	int age; 
//}STD;
//
//STD fun(STD std[], int n)
//{
//	
//	STD max; int i;
//	
//	/***** 在以下一行填写代码 *****/
//	max=std[0];
//	
//
//	for(i=1; i<n; i++)
//		
//	/***** 在以下一行填写代码 *****/
//	if(max.age<std[i].age)
//		max=std[i];
//	
//
//	
//	return max;
//}
//int main( )
//{
//	STD std[5]={"aaa",17,"bbb",16,"ccc",18,"ddd",17,"eee",15 };
//	STD max;
//	max=fun(std,5);
//	printf("The result:\n");
//	
//	/***** 在以下一行填写代码 *****/
//	printf("Name : %s, Age : %d\n",max.name,max.age);
//	
//
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#define N 10
//typedef struct ss
//{
//	char num[10]; 
//	int s; 
//
//} STU;
//	
//void fun( STU a[], STU *s )
//{
//	/********** Begin **********/
//	STU min;
//	int i;
//	min=a[0];
//	for(i=1;i<10;i++)
//	{
//		if(min.s>a[i].s)
//			min=a[i];
//	}
//	*s=min;
//	
//	/********** End **********/
//}
//
//
//int main ( )
//{
//	STU a[N]={ {"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},
//				{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} }, m ;
//	int i;
//	
//	printf("***** The original data *****\n");
//	for ( i=0; i< N; i++ )
//		printf("No = %s Mark = %d\n", a[i].num,a[i].s);
//	
//	fun ( a, &m );
//	
//	printf ("***** THE  RESULT *****\n");
//	printf ("The lowest : %s , %d\n",m.num, m.s);
//	
//	return 0;
//}
//#include <stdio.h>
//void swap(int *x,int *y);
//int main()
//{
//	int a=2,b=3;
//	swap(&a,&b);
//	printf("%d %d",a,b);
//	return 66;
//	
//}
//void swap(int *x,int *y)
//{
//	int tp;
//	tp=*x;
//	*x=*y;
//	*y=tp;
//}
//#include<string.h>
//#include <stdlib.h>
////s:一个形如a[运算符]b的字符串,例如：4.5+9,6-9,4/5,8*7...
////该函数经过处理，输出数的运算结果，例如若s为"20.3+1",则该函数在屏幕上输出21.30(保留小数点后面2位有效数字
////此函数内部操作的基本算法为：
////第1步：找到运算符对应的位置索引
////第2步：根据运算符位置，将其前面的字符串复制到strA,后面的字符串复制到strB
////第3步：将strA，strB转换为数值（使用函数atof,具体用法请百度）a，b
////第4步：根据运算符，对a，b进行相应的运算
////第5步：输出运算结果result
//void  processUserInputStr(char* s)
//{
//	int len=strlen(s); //s中有效字符的个数
//    //strA,strB分别用于存放两个操作数对应的字符串
//    char strA[100],strB[100];
//    //a,b分别用于存放将字符串转换后的数,result用于保存运算结果
//    double a,b,result;
//    char op;//用于存储s中的运算符对应的字符串
//    int k,posOp;//posOp：符号的位置索引
//    /**********begin**********/
//    
//    
//    /**********end**********/
//}
//#include <stdio.h>
////#include <stdlib.h>
//int main()
//{
//	char c;
//	c=getchar();
//	printf("%d",c);
//	return 66;
//}
//#include <stdio.h>
//#include <stdlib.h>
/*typedef struct piont{
	int data;
	int ID;
	struct piont *next;
}P;
void creat(int,P *);
void output(P *);
void find(int,P *);
void found(int,P *);
void insert(int,int,P *);
void del(int,P *);
int main()
{
	P *head=NULL;
	int x,y;
	head=(P *)malloc(sizeof(P));
	head->data=0;
	head->ID=0;
	head->next=NULL;
	printf("Please input int x:");
	scanf("%d",&x);
	while(x>0)
	{
		creat(x,head);
		printf("x=");
		scanf("%d",&x);
	}
	output(head);
	printf("Please del int x:");
	scanf("%d",&x);
	while(x>0)
	{
		del(x,head);
		output(head);
		printf("\n");
		printf("x=");
		scanf("%d",&x);		
	}
	return 0;
}
void del(int x,P *head)
{
	P *cur=head->next,*pre=head,*tp;
	while(cur!=NULL&&cur->ID!=x)
	{
		pre=cur;
		cur=cur->next;
	}
	if(cur==NULL)
	{
		printf("error\n");
	}
	else
	{
		pre->next=cur->next;
		free(cur);
		tp=pre->next;
		while(tp!=NULL)
		{
			tp->ID--;
			tp=tp->next;
		}
	}
}
void insert(int x,int y,P *head)
{
	P *cur=head->next,*pre=head,*newp;
	newp=(P *)malloc(sizeof(P));
	newp->ID=x+1;	
	newp->data=y;
	newp->next=NULL;
	if(pre->ID==x)
	{
		pre=cur;
		cur=cur->next;
	}
	while(pre->ID!=x&&cur!=NULL)
	{
		pre=cur;
		cur=cur->next;
	}
	if(pre->ID==x) 
	{
		pre->next=newp;
		newp->next=cur;
		head->ID++;
		while(cur!=NULL)
		{
			cur->ID++;
			cur=cur->next;
		}
	}
	else printf("error\n");	
}
void found(int x,P *head)
{
	P *cur=head->next;
	while(cur!=NULL&&cur->data!=x) cur=cur->next;
	if(cur==NULL) printf("error\n");
	else printf("%d %d\n",cur->data,cur->ID);
}
void find(int x,P *head)
{
	P *cur=head->next;
	while(cur!=NULL&&cur->ID!=x) cur=cur->next;
	if(cur==NULL) printf("error\n");
	else printf("%d\n",cur->ID);
}
void creat(int x,P *head)
{
	P *newp,*pre=head;
	newp=(P *)malloc(sizeof(P));
	head->ID++;
	newp->ID=head->ID;	
	newp->data=x;
	newp->next=NULL;
	while(pre->next!=NULL) pre=pre->next;
	pre->next=newp;
}
void output(P *head)
{
	if(head->next==NULL) 
	{
		printf("the list is kong");
		return;
	}
	P *cur=head->next;
	while(cur!=NULL)
	{
		printf("%d ",cur->data);
		cur=cur->next;
	}
}*/
/*int main()
{
	int a[15],b[15],i,tp;
	FILE *fp=NULL;
	fp=fopen("ceshi.txt","r");
	if(fp==NULL)	printf("error");
	for(i=0;!feof(fp);i++)
	{
		fscanf(fp,"%d %d\n",&a[i],&b[i]);		
	}
	tp=i;
	for(i=0;i<tp;i++)
	{
		printf("%d %d\n",a[i],b[i]);
	}
	fclose(fp);
	for(i=0;i<tp;i++)
	{
		a[i]=a[i]*0.3+b[i]*0.7;
	}
	fp=fopen("ceshi2.txt","w");
	if(fp==NULL)	printf("error");
	for(i=0;i<tp;i++)
	{
		fprintf(fp,"%d\n",a[i]);		
	}
	fclose(fp);
	return 66;
}*/
/*#include <stdio.h>
#include <stdlib.h>
typedef struct piont{
	int data;
	int num;
	struct piont *next;
}PIONT;
void creat(int,PIONT*);
void output(PIONT*);
void find(int,PIONT*);
void found(int,PIONT*);
void insert(int,int,PIONT*);
void del(int,PIONT*);
int main()
{
	int x,n;
	PIONT *head=NULL;
	head=(PIONT*)malloc(sizeof(PIONT));
	head->data=0;
	head->next=NULL;
	printf("Please input x:");
	scanf("%d",&x);
	while(x>0)
	{
		creat(x,head);
		printf("x=");
		scanf("%d",&x);
	}
	output(head);
	printf("Please find n:");
	scanf("%d",&n);
	while(n>0)
	{
		del(n,head);
		output(head);
		printf("n=");
		scanf("%d",&n);
	}
	return 66;
}
void del(int n,PIONT *head)
{
	PIONT *pre=head,*cur=head->next,*tp;
	while(cur!=NULL&&cur->num!=n)
	{
		pre=cur;
		cur=cur->next;
	}
	if(cur==NULL) printf("error");
	else{
		pre->next=cur->next;
		tp=cur->next;
		free(cur);
		while(tp!=NULL)
		{
			tp->num--;
			tp=tp->next;
		}
	}
}
void insert(int n,int x,PIONT *head)
{
	PIONT *pre=head,*cur=head->next,*newp=NULL;
	head->data++;
	newp=(PIONT*)malloc(sizeof(PIONT));
	newp->data=x;
	newp->num=n+1;
	newp->next=NULL;
	while(cur!=NULL&&pre->num!=n)
	{
		pre=cur;
		cur=cur->next;
	}
	if(pre->num!=n) printf("error");
	else
	{
		pre->next=newp;
		newp->next=cur;
		while(cur!=NULL)
		{
			cur->num++;
			cur=cur->next;
		}
	}
}
void found(int x,PIONT *head)
{
	PIONT *cur=head->next;
	while(cur!=NULL&&cur->data!=x)
	{
		cur=cur->next;
	}
	if(cur==NULL) printf("error");
	else
	{
		printf("%d %d",cur->data,cur->num);
	}
}
void find(int ID,PIONT *head)
{
	PIONT *cur=head->next;
	while(cur!=NULL&&cur->data!=ID)
	{
		cur=cur->next;
	}
	if(cur==NULL) printf("error");
	else
	{
		printf("%d %d",cur->data,cur->num);
	}
}
void creat(int x,PIONT *head)
{
	PIONT *newp,*cur=head;
	head->data++;
	newp=(PIONT*)malloc(sizeof(PIONT));
	newp->data=x;
	newp->num=head->data;
	newp->next=NULL;
	while(cur->next!=NULL) cur=cur->next;
	cur->next=newp;
}
void output(PIONT *head)
{
	PIONT *tp=head->next;
	while(tp!=NULL)
	{
		printf("%d(%d) ",tp->data,tp->num);
		tp=tp->next;
	}
	
}*/


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
/*int main()
{
	int a[5][5],i,j;
	srand(time(NULL));
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			a[i][j]=rand()%6+5;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			{
				printf("%2d ",a[i][j]);
			}
			printf("\n");
	}
	return 66;
}**/
/*int main()
{
	int i,j;
	char c,a[5];
//	scanf("%d",&i);
//	scanf("%d",&j);
//	scanf("%s",a);
//	c=getchar();
//	scanf("%c",&c);
//	printf("%d\n",i);
//	printf("%d\n",j);
//	puts(a);
//	printf("%c",c);
//	for(i=0;i<3;i++)
//	{
//		scanf("%c ",&a[i]);
//	//	if(c=='\n') break;
//	}
//	for(i=0;i<3;i++)
//	{
//		printf("%c ",a[i]);
//	}
	printf("i=");
	while(1)
	{
		scanf("%d%c",&i);
		if(c==',') break;
	}
	printf("j=");
	scanf("%d",&j);
	return 66;
}*/
//int main()
//{
//	int i,j;
//	char c;
//	scanf("%d",&i);
//	fflush(stdin);
//	scanf("%c",&c);
////	scanf("i=%d,j=%d",&i,&j);
////	printf("111\n");
////	printf("%d %d",i,j);
////	printf("11\r1");
//	printf("%c",c);
//	return 0;
//}


//------------------------------------1-4
/*#include <stdio.h>
int take(char*,int[],int[],int[],int[],int,int);
void judge(int,int,int,int,int[],int[],int[],int[],int);
int pull(char*,int);
int main()
{
	int i,p[4],q[4],r[4],s[4],tp,k,P,Q,R,S,goal,c,b,m,n;
	char a[100]={0};
	gets(a);
	for(i=0,k=0;a[i]!=0;)
	{
		tp=take(a,p,q,r,s,i,k);
		i=tp;
		k++;
	}
	for(P=0;P<2;P++)
		for(Q=0;Q<2;Q++)
			for(R=0;R<2;R++)
				for(S=0;S<2;S++)
				{
					if((P+Q+R+S==1)&&(R+!Q+!R+P==3))
					{
						c=P;
						b=Q;
						m=R;
						n=S;
					}
				}
//	printf("%d %d %d %d",P,Q,R,S);
//	for(i=0;i<k;i++)
//	{
//		printf("%d %d %d %d\n",p[i],q[i],r[i],s[i]);
//	}
	for(i=0,goal=0;i<k;i++)
	{
		if(p[i]==c&&q[i]==b&&r[i]==m&&s[i]==n)
		{
			goal=1;
			break;
		}
	}
	if(goal==1)
	{
		printf("p");
	}
	else printf("error");
//	for(i=0,goal=0;i<k;i++)
//	{
//		if(P[i]+Q[i]+R[i]+S[i]==3)
//		{
//			goal=1;
//			//printf("%d %d %d %d",p[i],q[i],r[i],s[i]);
//			break;
//		}
//	}
//	if(goal==1)
//	{
//		if(p[i]==1) printf("p");
//		if(q[i]==1) printf("q");
//		if(r[i]==1) printf("r");
//		if(s[i]==1) printf("s");
//	}
//	else printf("error");
	return 0;
}

void judge(int p,int q,int r,int s,int P[],int Q[],int R[],int S[],int j)
{
	if(r==1) P[j]=1;
	else P[j]=0;
	if(q==1) Q[j]=0;
	else Q[j]=1;
	if(r==1) R[j]=0;
	else R[j]=1;
	if(p==1) S[j]=1;
	else S[j]=0;
	
}

int take(char *a,int p[4],int q[4],int r[4],int s[4],int j,int k)
{
	int tp,flag;
	tp=pull(a,j);
	j=tp;
	for(flag=1;flag<=4;flag++)
	{
		if(a[j]>'a'&&a[j]<'z')
		{
			switch(a[j])
			{
				case 'p':p[k]=1;break;
				case 'q':q[k]=1;break;
				case 'r':r[k]=1;break;
				case 's':s[k]=1;break;
				default:break;
			}
			j++;
		}
		else
		{
			switch(a[j+1])
			{
				case 'p':p[k]=0;break;
				case 'q':q[k]=0;break;
				case 'r':r[k]=0;break;
				case 's':s[k]=0;break;
				default:break;
			}
			j+=2;
		}
		tp=pull(a,j);
		j=tp;
	}
	return j;
}
int pull(char *b,int i)
{
	for(;b[i]=='('||b[i]==')'||b[i]==','||b[i]==' ';)
	{
		i++;
	}
	return i;
}*/


//-------------------------------------测试 
/*#include <stdio.h>
void swap(int[],int[]);
int main()
{
	int a[2],b[2],i;
	char ch[10];
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ') printf("sfh");
	}
//	int N,a,b,c,d;
//	scanf("%d",&N);
//	for(a=1;a<N;a++)
//		for(b=1;b<N;b++)
//			for(c=1;c<N;c++)
//				for(d=1;d<N;d++)
//					if(a*a==b*b+c*c+d*d)
//						{
//							printf("Cube=%d,Tritp=(%d,%d,%d)\n",a,b,c,d);
//							a++;
//						}
//					
	return 0;
}
void swap(int a[2],int b[2])
{
	a[0]=5;
	b[0]=9;
}
*/
//#include <stdio.h>
//int main()
//{
//	int i;
//	char a[70];
//	gets(a);
//	for(i=0;a[i]!='\0';i++)
//	{
//		if()
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int i;
//	char a[70];
//	gets(a);
//	if(a[1]=='p') printf("p");
//	else printf("error");
//}


//-------------------------------------------------1-1


/*#include <stdio.h>
#include <stdlib.h>
int pull(char*,int);
void make(int*,char*,int);
int main()
{
	int a[20][20],reach[20][20],i,j,N,k,b,c,retur[2],tp;
	char input[100];
	gets(input);
	k=0;
	k=pull(input,k);
	make(retur,input,k);
	N=retur[0];
	k=retur[1];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			a[i][j]=0;
	}
	for(;input[k]!='\0';)
	{
		k=pull(input,k);
		make(retur,input,k);
		b=retur[0];
		k=retur[1];
		k=pull(input,k);
		make(retur,input,k);
		c=retur[0];
		k=retur[1];		
		a[b-1][c-1]=1;
		a[c-1][b-1]=1;
	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			printf("%d ",a[i][j]);
//		printf("\n");
//	}
	for(i=0;i<N;i++)
	{
		for(k=0;k<N;k++)
		{
			for(j=0,tp=0;j<N;j++)
				tp=a[i][j]*a[j][k]+tp;
			reach[i][k]=tp;
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
			{
				if(a[i][j]==0&&reach[i][j]!=0)
				{
					printf("(%d,%d)",i+1,j+1);
				}
			}
	}
//	for(i=0;i<k;i++)
//  for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			printf("%d ",a[i][j]);
//		printf("\n");
//	}//	{
//		for(j=0;j<2;j++)
//			printf("<%d,%d>",res[i][0],res[i][1]);
//	}
	
	return 0;
}
void make(int *res,char *in,int k)
{
	char str[2];
	int i;
	if((in[k]>='0'&&in[k]<='9')&&(in[k+1]>='0'&&in[k+1]<='9'))
	{
		str[0]=in[k];
		str[1]=in[k+1];
		res[0]=atoi(str);
		k+=2;
		res[1]=k;
	}
	else 
	{
		res[0]=atoi(in+k);
		res[1]=k+1;
	}
//	for(i=0;in[k]>='0'&&in[k]<='9';)
//	{
//		str[i]=in[k];
//		k++;
//		i++;
//	}
//	res[0]=atoi(str);
//	res[1]=k;
	
}
int pull(char *p,int i)
{
	for(;p[i]=='('||p[i]==')'||p[i]==','||p[i]==' ';)
	{
		i++;
	}
	return i;
}*/

/*#include <stdio.h>
int main()
{
	int a[N][N],i,j,tp,k,newp[N][N],tpp[N][N],m;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			tpp[i][j]=a[i][j];
		}
	}
	for(m=0;m<1;m++)
	{
		for(i=0;i<N;i++)
		{
			for(k=0;k<N;k++)
			{
				for(j=0,tp=0;j<N;j++)
					tp=a[i][j]*tpp[j][k]+tp;
				newp[i][k]=tp;
			}
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				tpp[i][j]=newp[i][j];
			}
		}
	}	
	printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%d ",newp[i][j]);
		printf("\n");
	}
	return 0;
}*/


//-------------------------------------------1-2
/*#include <stdio.h>
#include <stdlib.h>
int pull(char*,int);
void make(int*,char*,int);
int main()
{
	int a[20][20],reach[20][20],i,j,N,k,b,c,retur[2];
	char input[100];
	gets(input);
	k=0;
	k=pull(input,k);
	make(retur,input,k);
	N=retur[0];
	k=retur[1];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			a[i][j]=0;
	}
	for(;input[k]!='\0';)
	{
		k=pull(input,k);
		make(retur,input,k);
		b=retur[0];
		k=retur[1];
		k=pull(input,k);
		make(retur,input,k);
		c=retur[0];
		k=retur[1];		
		a[b-1][c-1]=1;
	}
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			printf("%d ",a[i][j]);
//		printf("\n");
//	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			reach[i][j]=a[i][j];
	}
	for(k=0;k<N;k++)
	{
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
				reach[i][j]=reach[i][j]||(reach[i][k]&&reach[k][j]);
		}
	}
	for(i=0,k=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			{
				if(a[i][j]==0&&reach[i][j]==1)
				{
					printf("<%d,%d>",i+1,j+1);
				}
			}
	}
//	for(i=0;i<k;i++)
//  for(i=0;i<N;i++)
//	{
//		for(j=0;j<N;j++)
//			printf("%d ",a[i][j]);
//		printf("\n");
//	}//	{
//		for(j=0;j<2;j++)
//			printf("<%d,%d>",res[i][0],res[i][1]);
//	}
	
	return 0;
}
void make(int *res,char *in,int k)
{
	char str[2];
	int i;
	if((in[k]>='0'&&in[k]<='9')&&(in[k+1]>='0'&&in[k+1]<='9'))
	{
		str[0]=in[k];
		str[1]=in[k+1];
		res[0]=atoi(str);
		k+=2;
		res[1]=k;
	}
	else 
	{
		res[0]=atoi(in+k);
		res[1]=k+1;
	}
//	for(i=0;in[k]>='0'&&in[k]<='9';)
//	{
//		str[i]=in[k];
//		k++;
//		i++;
//	}
//	res[0]=atoi(str);
//	res[1]=k;
	
}
int pull(char *p,int i)
{
	for(;p[i]=='<'||p[i]=='>'||p[i]==','||p[i]==' ';)
	{
		i++;
	}
	return i;
}*/


//-------------------------------
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B,total,i,flag;
    scanf("%d %d",A,B);
    char input[10];
    gets(input);
    for(i=0,flag=0;input[i]!='\0';i++)
    {
        if(flag==0&&input[i]>='0'&&input[i]<='9')
        {
            A=atoi(input+i);
            flag=1;
            i++;
        }
        if(flag==1&&input[i]>='0'&&input[i]<='9')
        {
            B=atoi(input+i);
        }
    }
    printf("%d",A+B);
    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}*/
#include <stdio.h>
#define N 21252
int main()
{
//	int a,b,c,d,N;
//	scanf("%d",&N);
//	for(a=2;a<=N;a++)
//		for(b=2;b<N;b++)
//			for(c=b;c<N;c++)
//				for(d=c;d<N;d++)
//					if((a*a*a)==(b*b*b+c*c*c+d*d*d))
//						printf("%d %d %d %d\n",a,b,c,d);
	int p,e,i,d,k;
	scanf("%d%d%d%d",&p,&e,&i,&d);
	for(k=d+1;k<=N;k++)
	{
		if((k-p)%23==0)
		{
			for(;k<=N;k+=23)
			{
				if((k-e)%28==0)
				{
					for(;k<=N;k+=28*23)
					{
						if((k-i)%33==0)
						{
							printf("%d\n",k-d);
							return 0;
						}
					}
				}
			}
			
		}
	}
		
	if(k>=N) printf("error");
	return 0;
	
}






























