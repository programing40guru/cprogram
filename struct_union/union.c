#include<stdio.h>
union un{
	char name[20];
	int roll;
	float x;
	float y;
	int z;
};
int main(){

	union un var;
	

	var.x=11.13;
	printf("union rol number printf= %d\n",var.roll);
	printf("if x=11.13 change and print x= %f and y= %f and also z = %d\n",var.x,var.y,var.z);

	return 0;
}


