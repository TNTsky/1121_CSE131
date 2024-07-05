#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	while(1){
		int n,i;
		printf("Please input a layer number :");
		scanf("%d",&n);
		if(n<1||n>15){
			printf("Wrong input , input again!\n\n");
			continue;
		}
		int size=n*(n+1)/2;
		int a[121]={0};
		a[0]=1;
		int j=0,k,l=1;
		for(i=0;i<size;i++){
			if(i==0){
				for(k=0;k<n-l;k++)
					printf("%5c",' ');
				a[i]=1;
				printf("%5d",a[i]);
				printf("%5c\n",' ');
				j+=l;
				l++;
			}
			else if(i==j){
				for(k=1;k<n-l+1;k++)
					printf("%5c",' ');
				a[i]=1;
				printf("%5d",a[i]);
				printf("%5c",' ');
			}
			else if(i==(j+l-1)){
				a[i]=1;
				printf("%5d\n",a[i]);
				j+=l;
				l++;
			}
			else{
				a[i]=a[i-l]+a[i-l+1];
				printf("%5d",a[i]);
				printf("%5c",' ');
			}
		}
	}
	return 0;
}
