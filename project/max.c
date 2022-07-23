#include "fun.h"
void del(SP *L,int x)
{
	if(x>L->length)
	{
		printf("error");
		return;
	}
	for(;x<(L->length);x++)
		L->arr[x-1]=L->arr[x];
	L->length--;
}
void put(SP *L,int x,int y)
{
	int tp=L->length;
	if(x>L->length)
	{
		printf("error");
		return;
	}
	L->length++;
	for(;tp>=x;tp--)
	{
		L->arr[tp]=L->arr[tp-1];
	}
	L->arr[x-1]=y;
	
}
void search(SP *L,int x)
{
	int i;
	for(i=0;i<L->length;i++)
		if(x==L->arr[i])
			{
				printf("%d\n",i+1);
				return;
			}
	if(i>=(L->length)) printf("error");
}
void get(SP *L,int x)
{
	if(x>L->length||x<0) printf("error\n");
	else printf("%d\n",L->arr[x-1]);
}
void crelist(SP *L,int x)
{
	if(L->length>Maxsize) return;
	L->length++;
	L->arr[L->length-1]=x;
}
void Insitlist(SP *L)
{
	L->arr=(int*)malloc(Maxsize);
	L->length=0;
	if(L->arr==NULL) printf("error");
}
void output(SP *L)
{
	int i;
	for(i=0;i<(L->length);i++)
		printf(" %d ",L->arr[i]);
}
