#include <stdio.h>
#include <stdlib.h>
#define N	3

struct Node {
	int data;
	struct Node *next;
};
typedef struct Node NODE;
void InsertList(NODE*,int);
void OutputList(NODE*);
int DeleteList(NODE*,int);
void main(void)
{	
	NODE *head=NULL; int x,y;
	if(NULL==(head=malloc(sizeof(NODE))))
	{
		puts("memory allocate failure!");
		return;
	}
	head->data=0;
	head->next=NULL;
	puts("input some data to create a list:");
	printf("x=");
	scanf("%d",&x);
	while(x>0)
	{
		InsertList(head,x);
		printf("x=");	scanf("%d",&x);
	}
	OutputList(head);
	puts("input a number to delete from list:");
	printf("y=");scanf("%d",&y);
	while(y>0)
	{
		if(DeleteList(head,y)==-1)
			puts("delete failure!");
		else
			OutputList(head);
		printf("y=");scanf("%d",&y);
	}
}
int DeleteList(NODE *h,int y)
{
	NODE *curp=NULL,*prep=NULL;
	prep=h;curp=h->next;
	while(curp->data!=y && curp!=NULL)
	{
		prep=curp;
		curp=curp->next;
	}
	if(curp==NULL) return -1;
	prep->next=curp->next;
	free(curp);
	return 0;
}
void InsertList(NODE* h,int x)
{
	NODE* newp,*cp;
	if(NULL==(newp=malloc(sizeof(NODE))))
	{
		puts("memory allocate failure!");
		return;
	}
	h->data++;
	newp->data=x;
	newp->next=NULL;
	cp=h;
	while(cp->next!=NULL) cp=cp->next;
	cp->next=newp;
}
void OutputList(NODE* h)
{
	while(h->next!=NULL)
	{
		h=h->next;
		printf("%d->",h->data);
	}
}
