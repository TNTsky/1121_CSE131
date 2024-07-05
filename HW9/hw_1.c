#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void create(int a[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=rand()%101;
		}
	}
}

void show(int a[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d] = %d, ",i,j,a[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	srand(time(0));
	int a[3][3],b[3][3],i,j,k;
	create(a);
	create(b);
	printf("a.\n");
	show(a);
	printf("b.\n");
	show(b);
	
	int add[3][3];
	printf("add.\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			add[i][j]=a[i][j]+b[i][j];
	show(add);
	
	int sub[3][3];
	printf("sub.\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			sub[i][j]=a[i][j]-b[i][j];
	show(sub);
	
	int multi[3][3];
	printf("multi.\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			int sum=0;
			for(k=0;k<3;k++)
				sum+=a[i][k]*b[k][j];
			multi[i][j]=sum;
		}
	}
	show(multi);
	
	return 0;
}
