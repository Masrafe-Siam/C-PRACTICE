#include<stdio.h>
int main()
{
int a[100],pos,i,size,value,pos1,value1;
printf("Enter the size of array\n");
scanf("%d",&size);
printf("Enter the element: \n");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("\tThe array is :\n");
for(i=0;i<size;i++){
    printf("\t%d",a[i]);
}
printf("\nEnter the position: \n");
scanf("%d",&pos);
printf("\nEnter the value: \n");
scanf("%d",&value);
size++;
for(i=size-1;i>=pos-1;i--){
    a[i+1]=a[i];}
a[pos-1]=value;
printf("\nEnter the position: \n");
scanf("%d",&pos1);
printf("\nEnter the value: \n");
scanf("%d",&value1);
size++;
for(i=size-1;i>=pos-1;i--){
    a[i+1]=a[i];}
a[pos-1]=value;
printf("\tThe new array is: \n");
for(i=0;i<size;i++){
    printf("\t%d",a[i]);
}
return 0;
}
