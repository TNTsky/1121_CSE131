#include <stdio.h>
#include <stdlib.h>

int main(){
	int m,n;
	printf("Please input a pair of integers (m,n): ");
	while((scanf("%d %d",&m,&n))!=EOF){
		if(n==0)
			printf("Wrong input, input again!\n\n");
		else if(m==0)
			printf("0 is not the power of any number, input again.\n\n");
		else{
			int o=m;
			while(o>0&&o!=n)
				o/=n;
			if(o==n)
				printf("%d is the power of %d.\n\n",m,n);
			else
				printf("%d is not the power of %d.\n\n",m,n);
		}
		printf("Please input a pair of integers (m,n): ");
	}
	return 0;
}
