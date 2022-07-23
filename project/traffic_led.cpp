#include <stdio.h>
#include <string.h>
//#include <unistd.h> sleep(1);
enum tr_led{red,yellow,green};
void wait1s(void);
int main()
{
	enum tr_led led;
	led=green;
	int i;
	while(1)
	{
	switch(led)
	{
		case green:
		{	printf("\r");
			printf("G ");
			for(i=30;i>0;i--)
			{
				printf("%2d",i);
				wait1s();
				printf("\b");printf("\b");
			}
			led=yellow;
			break;
		}
		case yellow:
		{	printf("\r");
			printf("Y ");
			for(i=5;i>0;i--)
			{
				printf("%2d",i);
				wait1s();
				printf("\b");printf("\b");
			}
			led=red;
			break;
		}
		case red:
		{	printf("\r");
			printf("R ");
			for(i=30;i>0;i--)
			{
				printf("%2d",i);
				wait1s();
				printf("\b");printf("\b");
			}
			led=green;
			break;
		}
	}
   }
	return 66;
}
void wait1s(void)
{
	int i,t;
	for(i=1,t=2;i<39999999;i++) {i++;i--;t=t*t;t=t/i;i++;i--;t=t*t;t=t/i;}
}
