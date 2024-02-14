#include<stdio.h>

int lol(int a, int b){

	return  b*a;
}

float add(int a, float b){
return a+b;
}

int main(){

int  (*ptr )(int ,int)= &lol; //its function pointer
printf("%d\n",lol(5,6));

int a=10;

float result;

float (*fp)(int,float);  // calling function  vi function pointere
// float add(int,float), result;

 fp = add; // assihnm add of add function to pointer
result =(*fp)(a,7.8) ;
printf(" ans is add = %f",result);


}

