#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(){
	char c;
	while(1){
		srand(time(NULL));
		int a[15],i,j,k;
		printf("Original array:\n");
		for(i=0;i<15;i++){
			a[i]=rand()%21-10;
			printf("%5d",a[i]);
		}
		
		printf("\nResult:\n");
		int temp;
		for(i=0;i<15;i++){
			temp=a[i];
			j=i-1;
			while((j>=0)&&(a[j]>temp)){
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
		}
		for(i=0;i<7;i++){
			printf("%5d%5d",a[i],a[14-i]);
		}
		printf("%5d\n",a[7]);
		
	}
}
