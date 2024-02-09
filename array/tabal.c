#include<stdio.h>
int main(){
	int ans[5][5];
	int row, col;
for(int i=0;i<5;i++){
for(int j=0 ;j<5; j++){
row= i+1;
col=j+1;
	ans[i][j]= row * col;
	printf("%2d\t",ans[i][j]);

}
printf("\n");
}

}
