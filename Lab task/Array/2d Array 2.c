#include <stdio.h>  
void main ()  
{  
    int a[3][3],i,j;   
    for (i=0;i<3;i++)  
    {  
        for (j=0;j<3;j++)  
        {  
            printf("Enter a element[%d][%d]: ",i,j);              
            scanf("%d",&a[i][j]);  
        }  
    }  
    printf("\nThe elements are ....\n");   
    for(i=0;i<3;i++)  
    {  
        printf("\n");  
        for (j=0;j<3;j++)  
        {  
            printf("%d\t",a[i][j]);  
        }  
    }  
    return 0;
}  
