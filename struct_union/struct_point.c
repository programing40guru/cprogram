#include<stdio.h>
struct student{

   char name[30];
   int roll;
   float marks;
};
 
void str_point(struct student *st){

printf("name is point = %s\t and roll no is : %d and its marks is = %.2f\n",st->name,st->roll,st->marks);
}

int main(){
	struct student var={"mehul dabhi",1010,87.9};
        printf("-----***struct with pointer****------\n");
	
	str_point(&var);


}
