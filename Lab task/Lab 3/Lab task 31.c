/*8. Print the following pattern.
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1*/



#include <stdio.h>
int main() 
{
   int a, b, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (a = 1; a <= rows; ++a)
    {
      for (b = 1; b <= a; ++b)
	   {
         printf("%d ", b);
      }
      printf("\n");
   }
   return 0;
}
