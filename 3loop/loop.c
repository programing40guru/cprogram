#include<stdio.h>
void result(int ans){ 

	if((ans)>=80){
		printf("eCongratulation you pass this exam with -----  = FIRST Gread ");
	}
	else if(ans>=60){
		printf("eCongratulation you pass this exam with  ---- = SECOND Gread ");

	}
	else if(ans>=36){
		printf("eCongratulation you pass this exam with  ---- =  PASS CLass ");

	}
	else{
		printf("ohh noo you are-----= > faill  <  ---- this exam ");
	}

}
int main(){ 
	int x,y;
	printf("\nenter total  student = ");
	scanf("%d",&x);
	printf("\n enter total subject=");
	scanf("%d",&y);
	int a;
	float anss;
	int marks;
	printf("\n-----its app student registor marks result update gread -----\n");
	for(int i=0;i<x;++i){


		printf("\n------------------------------\n");
		printf("enter student roll no=");
		scanf("%d",&a);
		printf("student  roll no is = %d \n-------************\n",a);
		float total=0;
		for(int k=1;k<=y;k++){
			printf("enter (1 to 100) k%d marks= ",k); 

			scanf("%2d",&marks);

			total = marks+total;

		}
		printf("roll no studet is :%d ----and---- total marks is = %f \n ",a,total);
		anss= (total)/y ;	
		printf("\nchaking your ans ............... \n.....your parsentize is = %f\n ",anss);	
			result(anss);
			printf("\nokay next ....done proseese  enrollment no ...............student.....\n");
			 
			
}
}
