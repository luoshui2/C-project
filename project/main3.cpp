#include <stdio.h>
#include <string.h>
int main()
{	char lchars[80],schars[80],middle[80];
	int i=0,j=0,n,k;
	printf("Please input a long char:");gets(lchars);
	printf("Please input a short char:");gets(schars);
	n=strlen(schars);
	for(i=0;i<=(strlen(lchars)-strlen(schars));i++,n++)	
	{	
		for(k=0,i;k<strlen(schars)&&i<(n+1);k++,i++)
	{
		middle[k]=lchars[i];
	}
	//printf("%d",i);
	if(strcmp(middle,schars)==0)
	{	j++;
		printf("p=%d\n",i-strlen(schars)+1);	
	}
	i=i-strlen(schars);
	//printf("%d",i);
	}
	printf("the sum=%d",j);
	return 66;
}
