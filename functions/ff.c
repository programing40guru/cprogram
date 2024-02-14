#include<stdio.h>
float lol(float a,float b){
	printf("hello mehul ");

	float ans;
	ans = a+b;
	return ans ,(a-b);
}

int ff(int n){

	if(n==0){
		return 1;
	}
	else {

		return (n*ff(n-1));

	}

}
int main(){
	float x,y;
	x=11.5;
	y=7.8;

	float ans= lol(x,y);
	printf("\n sum offf a: %f b is %f and sum is = %f",x,y,ans);

	int l;
	l=ff(5);
	printf ("factoryarl is 5= %d",l);
}

