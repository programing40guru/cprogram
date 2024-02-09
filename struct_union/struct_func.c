#include<stdio.h>
#include<string.h>
struct group{
	char name[30];
	int roll ;
	float marks;
};

void display(char name[],int roll,float marks){

	printf("name= %s\t",name);
	printf("and roll no is : %d\t",roll);
	printf("and marks is : %.2f\n",marks);

}

struct group change(struct group stt){
	stt.roll=stt.roll+10;
	stt.marks=stt.marks+15;
	return stt;
}

int main(){

	struct group s1={"mehul dabhi",1010,98.7};
	struct group s2;
	struct group s3;
	s3 =change(s1);
	strcpy(s2.name,"dhaval dabhi");
	s2.roll=38;
	s2.marks=9.54;

	printf("----*****Struct with function printt****---------\n");
	display(s1.name,s1.roll,s1.marks);
	display(s2.name,s2.roll,s2.marks);
	display(s3.name,s3.roll,s3.marks);
	return 0;

}


