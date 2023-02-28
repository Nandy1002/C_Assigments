//average marks
#include<stdio.h>

void main(){
	float mark[100]={0};
	char name[100][20]={0};
	int n,roll;
	printf("Enter the number of students (n<100) : ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Enter the Roll No. %d student name : ",i+1);
		scanf("%s",name[i]);
		printf("Enter his makrs : ");
		scanf("%f",&mark[i]);
	}
	float sum = 0;
	for(int i=0;i<n;i++){
		sum += mark[i];
	}
	printf("The average of %d marks are : %d",n,sum/n);
	printf("Enter the Roll_No you want to find : ");
	scanf("%d",&roll);
	printf("The name of the student is : %s\n",name[roll-1]);
	printf("The marks of the student is : %.2f\n",mark[roll-1]);
}

