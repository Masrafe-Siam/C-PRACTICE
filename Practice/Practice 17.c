#include<stdio.h>
int main()
{
	FILE* ptr = NULL;
	ptr = fopen("D:\Coding\Git Hub code\-C-Practice-\Practice\first.txt","r");
	char c = fgetc(ptr);
	printf("%s\n",c);
	return 0;
}
