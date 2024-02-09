#include<stdio.h>

int lol(int a, int b){

	return  b*a;
}

int main(){

	int  (*ptr )(int ,int)= &lol;

	

	printf("%d\n",lol(5,4));



}

