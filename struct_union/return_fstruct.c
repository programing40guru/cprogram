#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[20];
	int roll;
};

struct student *plol(){

	struct student *ptr;
	ptr= (struct student *)malloc (sizeof(struct student));

	printf("enter student name = ");
	scanf("%s",ptr->name);
	printf("\nenter roll = ");
	scanf("%d",&ptr->roll);
	return ptr;
}


void display(struct student *s){

	printf("name is = %s and roll is = %d\n",s->name,s->roll);

}


int main(){
	struct student *stu;
	stu= plol();
	display(stu);
}
