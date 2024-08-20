/*3.If the marks obtained by a student in five different subjects are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/



#include<stdio.h>
int main()
{	
	int subject_1,subject_2,subject_3,subject_4,subject_5,aggregate;
	double percentage;
	printf("Number of subject 1: ");
	scanf("%d",&subject_1);
	printf("Number of subject 2: ");
	scanf("%d",&subject_2);
	printf("Number of subject 3: ");
	scanf("%d",&subject_3);
	printf("Number of subject 4: ");
	scanf("%d",&subject_4);
	printf("Number of subject 5: ");
	scanf("%d",&subject_5);
	aggregate=subject_1+subject_2+subject_3+subject_4+subject_5;
	percentage=aggregate*(100.00/500.00);
	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);	
	return 0;	
}
