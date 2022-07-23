#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	printf("加密表为{'a','1'},{'o','2'},{'i','3'},{'e','4'},{'u','5'},{'d','6'},{'f','7'},{'t','8'}\n");
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
	system("pause");
	return 66;
} 
