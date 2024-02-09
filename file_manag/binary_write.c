#include<stdio.h>
#include<stdlib.h>
struct name{
	int n1,n2;
}
;
int main(){
	struct name no;
	FILE *var;
	var=fopen("binn.bin","wb");
	if(var==NULL){
		printf("ERROR not make bin file <<<<--\n");
		exit(0);
	}
	else {

		printf("\nbinardy file sussufully meked***--- \n");
		int flag=0;
		for(int n=1;n<=5;n++){
			no.n1=n;
			no.n2=n*5;

			flag = fwrite(&no,sizeof(struct name),1,var);
		}
		if(!flag){printf("yoiur failer opration make binary file ");}
		else {
			printf("---***succsully opration make binarcu gile binn.bin okay done ***---\n");
		}



	}


	return 0;
}
