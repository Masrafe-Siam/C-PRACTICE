//3.Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)


#include<stdio.h >  
#include<math.h>   
int main()  
{  
    int a,count,i,prime;  
    printf("Prime numbers from 1 to 500-\n\n");
    for(a=1;a<=500;a++)  
    {  
        if(a==1)  
        {  
            printf("1 is not a prime number.\n\n");  
            continue;  
        }  
        count=sqrt(a);  
        prime=1;  
        for(i=2;i<=count;i++)  
        {  
            if(a%i==0)  
            {  
                prime=0;  
                break;  
            }  
        }  
        if(prime)  
        {  
            printf("%d\t",a);  
        }  
    }  
    return 0;  
}
