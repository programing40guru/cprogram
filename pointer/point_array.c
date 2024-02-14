#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,4};
	int *p;
	p=a;
	int cout_even=0;
	int cout_odd=0;
	for(int i=0;i<10;i++){
		if(*p%2==0){
			cout_even++;
		}
		else
		{
			cout_odd++;
		}
		p++;
	}
	printf("total no of even is = %d\n",cout_even);
	printf("total no of odd  is = %d\n",cout_odd);
}
