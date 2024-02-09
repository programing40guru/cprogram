#include<stdio.h>
int main(){
	printf("i am print value unlimited \n to undertand continue old number \n and toy anter linit n = ? ");
	int n;
	scanf("%d",&n);       
	int i=0;
	if(n%2==0){printf("place enter n value even ");}else{
	do {
		i++;
		if(i%2==0){ continue ;}
		printf("odd %d \n ",i);


		if(i==n){
			printf("is number divedede 7 t and value is = %d",i);
			break;}



	}
	while(i<100);
}}

