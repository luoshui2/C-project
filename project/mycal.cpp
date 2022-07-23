#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int count,char *avge[])
{
	if(strcmp(avge[2],"+")==0)
	{
		printf("%d",atoi(avge[1])+atoi(avge[3]));
	}
	return 666;
}
