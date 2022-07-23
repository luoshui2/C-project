#include "fun.h"
int main()
{
	SP *L;
	int x,y;
	L=(SP*)malloc(sizeof(SP)*Maxsize);
	Insitlist(L);
	printf("Please input x=");scanf("%d",&x);
	while(x>0)
	{
		crelist(L,x);
		printf("x=");scanf("%d",&x);
	}
	printf("Please get int x=");scanf("%d",&x);
	while(x>0)
	{
		get(L,x);
		printf("x=");scanf("%d",&x);
	}
	printf("Please search x=");scanf("%d",&x);
	while(x>0)
	{
		search(L,x);
		printf("x=");scanf("%d",&x);
	}
	printf("Please put x,y=");scanf("%d,%d",&x,&y);
	while(x>0)
	{
		put(L,x,y);
		output(L);
		printf("x,y=");scanf("%d,%d",&x,&y);
	}
	printf("Please del x=");scanf("%d",&x);
	while(x>0)
	{
		del(L,x);
		output(L);
		printf("x");scanf("%d",&x);
	}
	return 66;
}
