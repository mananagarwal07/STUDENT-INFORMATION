#include<stdio.h>
#include<conio.h>

struct Student
{
	char name[50];
	int reg_no[15];
	int age;
	char dept[50];
	float gpa;
};

int main()
{
	int N;
	printf("Enter the number of student in your class :");
	scanf("%d" , &N);
	struct Student s[N];
    int i,j;
 
	for(i=0; i<N;i++)
	{
		printf("Enter the name of the student %d: ",i+1);
		scanf(" %s",&s[i].name);
		printf("Enter the registration number of the student %d: ",i+1);
		scanf(" %s",&s[i].reg_no);
		printf("Enter the age of student %d:",i+1);
		scanf("%d",&s[i].age);
		printf("Enter the department of the student %d: ",i+1);
		scanf(" %s",&s[i].dept);
		printf("Enter the GPA of student %d:",i+1);
		scanf("%f",&s[i].gpa);
 
		printf("\n");
 
	}
 
 
	float maxgpa;
	int l;
 
	for(l=0;l<N;l++)
	{
		if(l==0)
		maxgpa=s[l].gpa;
		else if(maxgpa<s[l].gpa)
		{
			maxgpa=s[l].gpa;
		}
	}
    printf("\nThe data you enetered.\n");
 
	int m;
	for(m=0; m<N;m++)
	{
		printf("\nName:%s",s[m].name);
		printf("\nregistration number:%s",s[m].reg_no);
		printf("\nAge:%d",s[m].age);
		printf("\nDepartment:%s",s[m].dept);
		printf("\nGPA: %0.2f",s[m].gpa);
		printf("\n");
 
 
	}
 
	printf("The Maximum GPA is:%0.2f",maxgpa);
 
 
	getch();
	return 0 ;
}