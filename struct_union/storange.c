#include<stdio.h>
struct student{
 char name[30];
 int no;
 float a;

}var;


int main(){
printf("address of name : %u\n",var.name);
printf("address of number :%u\n",&var.no);


}
