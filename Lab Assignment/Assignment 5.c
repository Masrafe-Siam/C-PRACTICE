//5.Write a program in C to make such a pattern like a pyramid with an asterisk.



#include<stdio.h>  
int main()  
{  
    int a,b,rows;  
    printf ("Enter a number for the rows: ");  
    scanf("%d", &rows);  
    printf("\n");  
    for (a = 1; a<= rows; ++a) 
    {  
        for (b = 1; b <= a; ++b)
        {  
            printf ("* ");
        }  
        printf ("\n");   
    }  
   return 0;
}
