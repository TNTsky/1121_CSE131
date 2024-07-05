#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void hw10_1(){
	srand(time(NULL));
	int a[10],i,j,k;
	printf("[");
	for(i=0;i<10;i++){
		a[i]=rand()%11-5;
		printf("%d ",a[i]);
	}
	puts("]");
	int f[10][10],l=0,r=0;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			f[i][j]=1;
			for(k=i;k<=j;k++)
				f[i][j]*=a[k];
			if(f[i][j]>f[l][r]){
				l=i;
				r=j;
			}
		}
	}
	printf("Maximum Product Subarray is from position %d to %d with product %d\n",l+1,r+1,f[l][r]);
	printf("The subarray is : [");
	for(i=l;i<=r;i++)
		printf("%d ",a[i]);
	puts("]\n");
}


void hw10_2(){
	char str[1024];
	printf("Input a string: ");
	scanf("%s",str);
	int len=strlen(str),n=0,i,j,k,r,l;
	for(i=0;i<len;i++){
		r=0;
		l=0;
		for(j=i;j<len;j++){
			if(str[j]=='R')
				r++;
			else if(str[j]=='L')
				l++;
			if(r==l){
				for(k=i;k<=j;k++){
					printf("%c",str[k]);
				}
				puts("");
				n++;
			}
		}
	}
	printf("Maximum number of balanced substrings: %d",n);
}


int main(void){
	puts("10.1");
	hw10_1();
	puts("10.2");	
	hw10_2();
	return 0;	
}
