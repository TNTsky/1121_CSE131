#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	puts("11.2");
	char str;
	FILE *file = fopen("Test.txt","r");
	int i=0,x=0,y=0;
	while((fscanf(file,"%c",&str))!=EOF){
		switch(str){
			case 'U': x++; break;
			case 'D': x--; break;
			case 'R': y++; break;
			case 'L': y--; break;
			case '\n':
				if(x==0&&y==0)
					printf("Time %d: True\n",++i);
				else
					printf("Time %d: False\n",++i);
				x=y=0; break;
		}
	}
	if(x==0&&y==0)
		printf("Time %d: True\n",++i);
	else
		printf("Time %d: False\n",++i);
	fclose(file);
	return 0;
}
