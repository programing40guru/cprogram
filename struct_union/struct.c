#include<stdio.h>
#include<string.h>
	struct st1{
		
		char name[30];
		int roll;
		float high;

	};

int main(){
	struct st1 s1= {"mehul",40,145.8};
	struct st1 s2,s3,s4;
	strcpy(s2.name,"dhaval");
	s2.roll= 38;
	s2.high= 157.5;

	printf("its is structure .........\n");
        printf("enter student name , roll number , hight ");
	gets(s3.name);
	scanf("%d\n%f",&s3.roll,&s3.high);
            s4=s2;
	printf("\n------******hello struct******----------\n ");
	printf("\n student 1 detailes is = name : %s and rollno is :%d and hight : %.2f\n",s1.name,s1.roll,s1.high);
	printf("\n student 2 detailes is   name : %s and rollno is :%d and hight : %.2f\n",s2.name,s2.roll,s2.high);
	printf("\n student 3 detailes is   name  :%s and rollno is :%d and hight : %.2f\n",s3.name,s3.roll,s3.high);
	printf("\n student 4 details coperd student 4 in past s4  ?n name : %s and rollno is :%d and hight : %.2f",s4.name,s4.roll,s4.high);  
	return 0;
}
