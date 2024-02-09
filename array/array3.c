#include<stdio.h>
int main(){
	int a[3][3];
	printf("enter 3 x 3 matrix = \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("enter a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}

	}

		printf("\n-------------printing aaray orignal -----------\n");

		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("%2d ",a[i][j]);
			}
			
			printf("\n");
		}

		printf("\n -----------printing array transform ----------\n");

		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		printf("%2d ",a[j][i]);
		
		}
		printf("\n");
		
		
		}

		printf("------------printing  multiplication orignal and transform  array ----------\n");


		for(int i=0;i<3;i++){
		for(int j=0 ;j<3;j++){
		printf("%2d ",(a[i][j]*a[j][i]));
		}
		printf("\n");
		}
	

}
