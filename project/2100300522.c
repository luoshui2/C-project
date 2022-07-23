//#include <stdio.h>
//#include <stdlib.h>
//typedef struct student
//{
//    float usual_mark;
//    float exam_mark;
//    float overall_mark;
//}Student;
//void readf(Student[]);
//int main()
//{
//	Student *stu;
//	return 66;
//}
//void readf(Student stu[10])
//{
//	FILE *fp;
//	int i;
//	fp=fopen("data.txt","r");
//	stu=(Student*)malloc(sizeof(Student));
//	for(i=0;i<3;stu++)
//	{
//		fscanf(fp,"%f %f",stu->usual_mark,stu->exam_mark);
//		stu->overall_mark=0.2*stu->usual_mark+0.8*stu->exam_mark;
//	}
//	printf("%.2f",stu->usual_mark);
//}
//#include <stdio.h>
//#include <stdlib.h>
//struct stduent{
//	int data;
//	struct stduent *next;
//};
//typedef struct stduent ST;
//void creat(ST*,int);
//void output(ST*);
//void add(ST*,int,int);
//int main()
//{
//	ST *head;
//	int x,y;
//	head=(ST*)malloc(sizeof(ST));
//	head->data =0;
//	head->next =NULL;
//	printf("Please input int:x=");
//	scanf("%d",&x);
//	while(x>0)
//	{
//		creat(head,x);
//		printf("x=");
//		scanf("%d",&x);
//	}
//	output(head);
//	printf("Please input int:");
//	scanf("%d %d",&x,&y);
//	while(x>0)
//	{
//		add(head,x,y);
//		printf("Please input int:");
//		scanf("%d %d",&x,&y);
//		output(head);
//	}
//	output(head);
//	return 66;
//}
//void add(ST *head,int x,int y)
//{
//	ST *news,*cur=head->next,*pre=head;
//	news=(ST*)malloc(sizeof(ST));
//	news->data=y;
//	while(cur!=NULL&&pre->data!=x)
//	{
//		cur=cur->next;
//		pre=pre->next;
//	}
//	if(pre->data!=x) printf("input error");
//	else{
//		 pre->next=news;
//		 news->next=cur;
//	}
//}
//void creat(ST *head,int x)
//{
//	ST *newp,*temp=head;
//	newp=(ST*)malloc(sizeof(ST));
//	newp->data =x;
//	newp->next =NULL;
//	while(temp->next!=NULL) temp=temp->next;
//	temp->next =newp;
//}
//void output(ST *head)
//{
//	ST *cur=head->next;
//	while(cur!=NULL)
//	{
//		printf("%d->",cur->data);
//		cur=cur->next;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int i,k,sum;
////	printf("Please input int:");
////	scanf("%d",n);
//	for(k=1;k<1001;k++)
//	{
//
//		for(i=1,sum=0;i<k;i++)
//		{
//			if(k%i==0)
//			{
//				sum=sum+i;
//			}
//		}
////		printf("%d ",k);
////		for(i=0,total=0;i<j;i++)
////		{
////			total=total+a[i];
//	//		printf("%d ",a[i]);
//		//	printf("s%d",total);
////		}
//	//	printf("\n");
////		printf("%d  %d\n",k,total);
//		if(sum==k) printf("%d ",k);
//		
//	}
//	return 66;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int arr[4][4],i,j,k,b[4][4];
//	srand(time(NULL));
//	for(i=0;i<4;i++)
//		for(j=0;j<4;j++)
//			arr[i][j]=rand()%10;
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<4;j++)
//			printf("%d ",arr[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//	for(i=3,k=0;i>=0;i--,k++)
//		for(j=0;j<4;j++)
//			b[k][j]=arr[j][i];
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<4;j++)
//			printf("%d ",b[i][j]);
//		printf("\n");
//	}
//	return 66;
//}
//#include <stdio.h>
//#define N 5
//int main()
//{
//	int a[N][N],i,j;
//	for(i=0;i<N;i++)
//	{
//		a[i][0]=1;
//		a[i][i]=1; 
//	}
//	for(i=1;i<N;i++)
//		for(j=1;j<i;j++)
//			a[i][j]=a[i-1][j-1]+a[i-1][j];
//	for(i=0;i<N;i++)
//	{
//		for(j=0;j<=i;j++)
//			printf("%d ",a[i][j]);
//		printf("\n");
//	}
//	return 66;
//}
#include <stdio.h>
#include <stdlib.h>
#define length 10
typedef struct{
	int *arr;
	int length;
}SP;
int main()
{
	printf("%d",length);
	return 66;
}





















