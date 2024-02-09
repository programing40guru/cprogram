#include<stdio.h>


int fect(int no){

	if(no==0){return 0;}
	int n= no+fect(no -1);
	return n;

}
int main(){

	int aa;
	printf("enter to number to find fectorial ");
	scanf("%d",&aa);
	 
 
printf("%d",fect(aa));
return 0;
}

