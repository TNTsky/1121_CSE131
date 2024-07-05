#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	while(1){
		srand(time(NULL));
		int a[5][5],i,j,k,l,m;
		int f1[3][3]={0,0,0,0,1,0,0,0,0};
		int f2[3][3]={-1,0,1,-1,0,1,-1,0,1};
		int f3[3][3]={-1,-1,-1,-1,8,-1,-1,-1,-1};
		int r[3][3]={0};
		printf("Image:\n");
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				a[i][j]=rand()%21-10;
				printf("%4d",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		int f;
		printf("Please select a filter :");
		while(scanf("%d",&f)!=EOF){
			if(f<1||f>3){
				printf("Please select from 1 to 3.\n\n");
				continue;
			}
			printf("Filter %d :\n",f);
			if(f==1){
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%4d",f1[i][j]);
					}
					printf("\n");
				}
				printf("\nResult:\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						int sum=0;
						for(k=0;k<3;k++){
							for(l=0;l<3;l++){
								sum+=a[i+k][j+l]*f1[k][l];
							}
						}
						printf("%4d",sum);
					}
					printf("\n");
				}
			}
			
			if(f==2){
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%4d",f1[i][j]);
					}
					printf("\n");
				}
				printf("\nResult:\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						int sum=0;
						for(k=0;k<3;k++){
							for(l=0;l<3;l++){
								sum+=a[i+k][j+l]*f2[k][l];
							}
						}
						printf("%4d",sum);
					}
					printf("\n");
				}
			}
			
			if(f==3){
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%4d",f1[i][j]);
					}
					printf("\n");
				}
				printf("\nResult:\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						int sum=0;
						for(k=0;k<3;k++){
							for(l=0;l<3;l++){
								sum+=a[i+k][j+l]*f3[k][l];
							}
						}
						printf("%4d",sum);
					}
					printf("\n");
				}
			}
			printf("\nPlease select a filter :");
		}
	}
	return 0;
}
