#include<stdio.h>    
int main()    
{    
 int a1=0,a2=1,a3,i,num;    
 printf("Enter the number:");    
 scanf("%d",&num);    
 printf("\n%d %d",a1,a2);    
 for(i=2;i<num;++i)    
 {    
  a3=a1+a2;    
  printf(" %d",a3);    
  a1=a2;    
  a2=a3;    
 }  
  return 0;  
 }
