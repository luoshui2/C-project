#include <stdio.h>
#include <stdlib.h>

//int main()
//{	int ret,i;
//	int number;
//	printf("Input a number(>0):");scanf("%d",&number);
//	if(number<0)
//	{	while(number<0)
//		{	printf("Input error!Please input a positive integer x(>0):");
//			scanf("%d",&number);
//			number=number;
//		}
//	} 
//	number=number;
//    switch(number)
//    	{	case 1:printf("%d is a prime number",number);
//    		case 2:printf("%d is a prime number",number);
//    		case 3:printf("%d is a prime number",number);
//    		default:if(number%2==0||number%3==0||number%5==0||number%7==0)
//    					printf("%d is not a prime number",number);
//					else printf("%d is a prime number",number);
//		}
//	
//	return 666;
//}
#include <stdio.h>
#include <math.h>
int main()
{	int x;
	double y,e;
	e=2.718281828459;
	/*********begin**********/
	printf("Input x: ");scanf("%d",&x);
	if(x==0)
	{	y=1;
		printf("y=%f",y);}
	if(x>0)
	{	x=-x;
		y=pow(e,x);
		printf("y=%f",y);
		x=-x;
		}
	if(x<0) 
	{	y=-pow(e,x);
		printf("y=%f",y);}
	



	/**********end***********/
	return 0;
}

