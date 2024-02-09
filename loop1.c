#include<stdio.h>
int main(){
int x;
re: 
	{int i=0;
		int count = 0;
		do{ int j=0;
			do{
				printf("%d ",count++);

				j++;
			}
			while(j<3);



			printf("\n");
			i++;}
		while(i<3);
	
	}

	printf("enter 1 to re run code ");
	scanf("%d",&x);
	if(x==1){
	goto re;
	}
	

}
