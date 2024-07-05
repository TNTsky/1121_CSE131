#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i,j;
	printf("Please input a range[i, j]: ");
	while((scanf("%d %d",&i,&j))!=EOF){
		int k,l,m,n=0,cp=1;
		for(k=i;k<=j;k++){
			cp=1;
			int digit=0,k1,kk=k;
			while(kk>0){
				kk/=10;
				digit++;
			}
			kk=k;
			for(m=0;m<digit;m++){
				if(cp){
					k1=kk%10;
					int d;
					for(d=1;d<digit;d++)
						k1*=10;
					kk=kk/10+k1;
					for(l=2;l*l<=kk;l++){
						if(kk%l==0){
							cp=0;
							break;
						}
					}
				}
			}
			if(cp)
				n++;
		}
		if(n==0)
			printf("No");
		else
			printf("%d",n);
		printf(" Circular Primes.\n\n");
		printf("Please input a range[i, j]: ");
	}
	return 0;
} 
