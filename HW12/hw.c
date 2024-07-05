#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void generate(){
	FILE *file1 = fopen("Matrix.txt","w");
	FILE *file2 = fopen("Bais.txt","w");
	int i,j,n;
	printf("Inputs :\n\n");
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			n=rand()%21-10;
			fprintf(file1,"%4d ",n);
			printf("%4d",n);
		}
		fprintf(file1,"\n");
		printf("\n");
	}
	printf("\nBais :\n\n");
	for(i=0;i<16;i++){
		for(j=0;j<14;j++){
			fprintf(file2,"   1");
			printf("%4d",1);
		}
		fprintf(file2,"\n");
		printf("\n");
	}
	fclose(file1),fclose(file2);
	printf("\n");
}  

void convolutional(){
	printf("Kernel :\n\n");
	FILE *file1=fopen("Kernel.txt","r");
	FILE *file2=fopen("Matrix.txt","r");
	FILE *file3=fopen("Conv.txt","w");
	float ker[3][3],m[16][16];
	int b[13][13];
	int i,j,k,l;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fscanf(file1,"%f",&ker[i][j]);
			printf("%f ",ker[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			fscanf(file2,"%f",&m[i][j]);
		}
	}
	printf("\nConvolution :\n\n");
	for(i=0;i<13;i++){
		for(j=0;j<13;j++){
			float sum=1;
			for(k=0;k<3;k++){
				for(l=0;l<3;l++){
					sum+=m[i+k][j+l]*ker[k][l];
				}
			}
			b[i][j]=round(sum);
			printf("%4d",b[i][j]);
			fprintf(file3,"%4d",b[i][j]);
		}
		printf("\n");
		fprintf(file3,"\n");
	}
	fclose(file1),fclose(file2),fclose(file3);
	printf("\n");
}

void relu(){
	printf("Result :\n\n");
	FILE *file1=fopen("Conv.txt","r");
	FILE *file2=fopen("Result.txt","w");
	int i,j,n;
	for(i=0;i<13;i++){
		for(j=0;j<13;j++){
			fscanf(file1,"%d",&n);
			n=(n>=0)?n:0;
			printf("%4d",n);
			fprintf(file2,"%4d",n);
		}
		printf("\n");
		fprintf(file2,"\n");
	}
	fclose(file1),fclose(file2);
}

int main(){
	srand(5);
	generate();
	convolutional();
	relu();
}


