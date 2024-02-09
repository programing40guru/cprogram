#include<stdio.h>
#include<string.h>
struct class1{
   char sub;
   int marks;
};
struct class2{
  char sub;
  int  marks;

};
struct cig{
	char name[30];
	struct class1 gp1;
        struct class2 gp2;	
     
};

int main(){
struct cig var;
strcpy(var.name,"mehul dabhi");
var.gp1.marks=90;
var.gp1.sub='A';
var.gp2.marks=60;
var.gp2.sub='B';
printf("\n-------*********collage student struct class A or B and its roll number *******---\n");

printf("Student name is = %s\t and ists marks  is = %d\t and in group is = %c\n",var.name,var.gp1.marks,var.gp1.sub);
printf("Student name is = %s\t and its  marks  is = %d\t and in group is = %c\n",var.name,var.gp2.marks,var.gp2.sub);



}
