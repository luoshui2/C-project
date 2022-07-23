#include <stdio.h>
#include <stdlib.h>
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
	printf("now creat a list\n");
	printf("x=");scanf("%d",&x);
	while(x>0)
	{
		input(head,x);
		printf("x=");scanf("%d",&x);
	}
	printf("the list is\n");
	output(head);
	printf("input delect list:\n");
	printf("y=");scanf("%d",&y);
	while(y>0)
	{
		if(dele(head,y)==-1)
		{
			printf("delect error\n");
		}	
		else output(head);
		printf("y=\n");scanf("%d",&y);
	}
	return 66;
}
void input(NODE *h,int x)
{
	NODE *newp,*cp;
	if((newp=malloc(sizeof(NODE)))==NULL)
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
	printf("\n");
}
int dele(NODE *h,int y)
{
	NODE *pre=NULL,*cur=NULL;
	pre=h;cur=h->next;
	while(cur!=NULL&&cur->data!=y)
	{
		pre=cur;
		cur=cur->next;
	}
	if(cur==NULL) return -1;
	pre->next=cur->next;
	free(cur);
	return 0;
	
}


