//Write a program that merge two array and print the unique elements.


#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int b[]={2,7,8,5,9};
 	int c[100],i,j,k,size;
	for (i=0;i<5;i++)
	{
		c[i]=a[i];
		c[i+5]=b[i];
	}
	printf("Merged Array-\n");
	for (i=0;i<10;i++)
	{
		printf("%d\t",c[i]);
	}
	printf ("\nDefine the number of elements in an array: ");  
    scanf (" %d", &size);
	for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            if ( c[i] == c[j])  
            {  
                for ( k = j; k < size - 1; k++)  
                {  
                    c[k] = c [k + 1];  
                }  
                size--;  
               // j--;      
            }  
        }     
    }
    for ( i = 0; i < size; i++)  
    {  
        printf ("%d\t", c[i]);  
    }  
 return 0;	
}
