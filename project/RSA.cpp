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
	printf("���ܱ�Ϊ{'a','1'},{'o','2'},{'i','3'},{'e','4'},{'u','5'},{'d','6'},{'f','7'},{'t','8'}\n");
	printf("������Ҫ���ܵ�Ӣ��"); 
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		for(j=0;j<8;j++)
		{
			if(b[i]==a[j].yw) b[i]=a[j].mw;
		}
	}
	printf("���ܺ��Ӣ��Ϊ"); 
	puts(b);
	system("pause");
	return 66;
} 
