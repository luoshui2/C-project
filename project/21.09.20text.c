#include <stdio.h>
#define N 100
int main()
{	int n,a[N];
	printf("请输入一个整数:%d\n",n);
	scanf("%d",&n);
	int i=0;
	while(n>0)
	{	a[i]=n%2;
		i=i+1;
		n=n/2;
	}
	printf("%d\n",i);
	for(i--;i>=0;i--)
		{	printf("i=%d",i);
			printf("  %d\n",a[i]);
			
		}
	printf("\n");
	return 666;
}

