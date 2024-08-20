//Write a program to find a maximum number from an array.


#include<stdio.h>
int main()
{
	int a[]={35,7,99,5,72,23,9,6,10,67},i,max;
	max=a[0];
	for (i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum number from the array is: %d",max);
	return 0;
}
