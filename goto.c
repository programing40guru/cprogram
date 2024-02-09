#include<stdio.h>

void chake(int a){
	if(a%2==0){
		goto even ;
	}	else{ 
		goto odd;}

even :
	{printf("%d is even : ",a);}
odd:
	{	printf("%d is odd : ",a);}
}


int main(){
re:{
	int n=5;
	chake(n);
	
   }
	int nn;
	printf("enetr re run program ? 1==");
	scanf("%d",&nn);
	if(nn==1){
	goto re;
	}

return 0;
}


