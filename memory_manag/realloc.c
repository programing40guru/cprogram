#include<stdio.h>
#include<stdlib.h>
int main(){
	int *pt1;
	int i,n;
	n =5;
	pt1 =(int *)calloc(n,sizeof(int));
	if(pt1==NULL){

		printf("not allocate memory---");
		exit(0);
	}
	else{

		printf("memory allocated -----***\n");

		printf("array element === ");
		for(i=0;i<n;i++){
			pt1[i]= i+1;
			printf("%d ",pt1[i]);
		}
		printf("\nnew aliment incriment realocate\n");
		n=10 ;
		pt1= (int *)realloc(pt1,(n) * (sizeof(int)));
		printf("sussuree gulll\n");
		for(i=5;i<n;i++){
			pt1[i]=i+1;
			
			printf("%d ",pt1[i]);

		}



	}
	return 0;
}
