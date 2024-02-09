#include<stdio.h>
#define cout 11
int main(){
	int group[cout]={ 0,0,0,0,0,0,0,0,0,0,0};
	int i ,high,low,n,j;
	printf("enter total your element number is = ");
	scanf("%3d",&n);
	
	float val[n];
	for(int i=1;i<=n;i++){

		scanf("%f",&val[i]);
		++group[(int)(val[i]/10)];//counting  valie defalt is 0 incriment tangin in cout change value
	}
	printf("GRUP\t\t RANGE \t\tFREQUENCY\n");


	for(i=0;i<cout;i++){
		low= i*10;
		if(i==10){
			high=100;
		}else {
			high = low +9;
		}
		printf("%d\t:%3d to %3d\t=:\t%d \n",i+1,low,high,group[i]);
	}

}
