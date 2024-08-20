#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<21;i++)
	{
		if(i==9)
		{	
		 break;		
		}
	   printf("%d\n",i);
	}
	printf("Out of loop");
	return 0;
}
