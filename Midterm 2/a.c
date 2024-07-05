#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	while(1){
		char input;
		int i,j,size=-1,f=0,a[26]={0};
		printf("Please input a string: ");
		scanf("%c",&input);
		while(input!='\n'){
			if(65<=input&&input<=90)
				a[input-65]++;
			else if(97<=input&&input<=122)
				a[input-97]++;
			else{
				f=1;
			}
			scanf("%c",&input);
		}
		if(f){
			printf("\nThe string includes illegal character!\n\n");
			continue;
		}
		else{
			printf("\nCount result:\n");
			for(i=0;i<26;i++){
				printf("  %c :%3d",i+65,a[i]);
				if((i+1)%6==0)
				printf("\n");
			}
		}
		printf("\n\n");
	}
	return 0;
}
