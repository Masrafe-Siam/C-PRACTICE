//Write a program to find the minimum number from an array.


#include<stdio.h>
int main()
{
	int a[]={35,7,99,5,72,23,9,6,10,67},i,min;
	min=a[0];
	for (i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum number from the array is: %d",min);
	return 0;
}
