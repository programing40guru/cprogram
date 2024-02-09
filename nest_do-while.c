#include<stdio.h>
#define colmax 10
#define rowmax 12
int main(){
	int row ,col,y;

row=1;
	do{
              col=1;
		do{
		
			y=col*row;
			printf("%4d ",y);
			col++;
		}while(col<=colmax);

		printf("\n");
		row++;
	}while(row<=rowmax);
}
