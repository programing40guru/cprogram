#include<stdio.h>
int main(){
	int a=10;
printf("before opration %d\n ",a);
printf("after   a++ incriment opration %d \n ",a);
printf("af  ++a incriment opration %d\n ",++a);
int n;
printf("enter n value ");
scanf("%d",&n);
if(0>n){
	printf("you enterd number is negative\n");
}
printf("number of value is =%d\n",n);
switch(n){
	case 1:{printf("sunday first ");}break;
	case 2: {printf("monday second");}break;
	case 3: {printf("tuesday thred");}break;
	default :{printf("other day ");}	
}
printf("int a= 10 to out (float)a = %f \n ",(float)a);
int ss[25]={10,20,""}
}
