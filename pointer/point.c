#include<stdio.h>
int main(){
	int var=10;
	int *ptr= &var;
	int a=125;
	char aa='A';
	printf("Address of ptr = %p \n",ptr);
	printf("value of  var = %d\n",var);
	printf("value of *ptr = %d\n",*ptr);
	int i=0,*p;

	int x[5]={ 5,9,6,7,4};
	p=x;
	printf("element\t value\t address\n");
	while(*p!='\0'){
		printf("x[%d]\t %d\t %u  \n",i,*p,p);
		i++; p++;
	}
 printf("\n-------------------\n");
 int *st=NULL;
 if(st==NULL){printf("its null pointer okk\n");
 }else 
	 printf("oh no samthing its wrong");
}

