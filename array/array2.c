#include<stdio.h>
void lol(int aaa[2][3]){
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
printf("%d ",aaa[i][j]);
}
printf("\n");
}
}
int main(){
	int ary[2][3]={10,20,30,40,50,60};
	
	
                       lol(ary);
		      
	}


