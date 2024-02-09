#include<stdio.h>
#include<string.h>
struct student{

	char name[30];
	int roll;
	float marks;

};

int main(){
	int n;
	printf("enter total student is = ");
	scanf("%d",&n);
	while (getchar() != '\n');
	char temp[100];
	struct student var[n];
	for(int i=0;i<n;i++){

		printf("enter name %d st student name = ",1+i);
		gets(temp);
		strcpy(var[i].name,temp);

		printf("\n enter %d st roll no = ",1+i);
		scanf("%d",&var[i].roll);
	while (getchar() != '\n');
		printf("\nenter %d st marks  = ",1+i);
		scanf("%f",&var[i].marks);
	while (getchar() != '\n');


	}


	printf("-------******All student print marks******-------\n");

	for(int i=0;i<n;i++){
		printf("\nstudent name is : %s its roll number is :%d and is marks = %f\n",var[i].name,var[i].roll,var[i].marks);}

}
