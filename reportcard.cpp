#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	char s[50],p[50],a[50],b[50],c[50],d[50];
	int age,roll_number,batch;
	float average,per,mark1,mark2,mark3,mark4,mark5;
	printf("Enter your name: ");
	scanf("%s",s);
	printf("Enter your batch: ");
	scanf("%d",&batch);
	printf("Enter your Roll Number: ");
	scanf("%d",&roll_number);
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your 1 subject: ");
	scanf("%s",p);
	printf("Enter your 2 subject: ");
	scanf("%s",a);
	printf("Enter your 3 subject: ");
	scanf("%s",b);
	printf("Enter your 4 subject: ");
	scanf("%s",c);
	printf("Enter your 5 subject: ");
	scanf("%s",d);
	printf("Enter the marks of %s: ",p);
	scanf("%f",&mark1);
	printf("Enter the marks of %s: ",a);
	scanf("%f",&mark2);
	printf("Enter the marks of %s: ",b);
	scanf("%f",&mark3);
	printf("Enter the marks of %s: ",c);
	scanf("%f",&mark4);
	printf("Enter the marks of %s: ",d);
	scanf("%f",&mark5);
	average = (mark1+mark2+mark3+mark4+mark5)/5;
	per = ((mark1+mark2+mark3+mark4+mark5)/500)*100;
	
	printf("\t||Your Report Card||\t\n");
	printf("Your Name is %s\n",s);
	printf("Your Batch is %d\n",batch);
	printf("Your Roll Number is %d\n",roll_number);
	printf("Your Age is %d\n ",age);
	printf("Your Average Marks are %f\n",average);
	printf("Your Percentage is %f\n ",per);
}