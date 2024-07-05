#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){ 
	if(a<b)
		return gcd(b,a);
	else{
		int temp=b;
		b=a%b;
		a=temp;
		if(b>0)
			return gcd(a,b);
		else
			return a;
	}
}
int main(void)
{
	int a,b;
	FILE *file = fopen("GCD.txt","r");
	while(fscanf(file,"%d %d",&a,&b)!=EOF){
		printf("The GCD of (%d, %d) is %d.\n",a,b,gcd(a,b));
	}
	fclose(file);
}
