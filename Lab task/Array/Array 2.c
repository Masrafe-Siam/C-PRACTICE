#include <stdio.h>
int main() 
{
  int i,a[10];
  printf("Enter 10 numbers: ");
  for(i=0;i<10;++i) 
  {
    scanf("%d", &a[i]);
  }
  printf("The numbers are: ");
  for(i=0;i<10;++i) 
  {
    printf("%d\t",a[i]);
  }
  return 0;
}
