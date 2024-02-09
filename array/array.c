#include<stdio.h>
int main(){
	int ar[20];
	float total ;
	for(int i=1;i<=5;i++){
		scanf("%d",&ar[i]);
	}
	printf("hello ");
	total= 0;
	for(int i=1;i<=5;i++){
		total =total + ar[i]*ar[i];
		printf("i %d chhhh  = a[%2d]* a[%2d]\n",i,ar[i],ar[i]); 
	}
	printf("%.2f",total);
}
