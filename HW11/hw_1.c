#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}


int main(void){
	char str[256],c;
	FILE *file1 = fopen("input.txt","r");
	FILE *file2 = fopen("11_1_result.txt","w");
	while((fscanf(file1,"%s",str))!=EOF){
		int size=strlen(str),i,j;
		for(i=0;i<size-1;i++){
			int min=i;
			for(j=i;j<size;j++){
				if(str[j]<str[min])
					min=j;
			}
			swap(&str[i],&str[min]);
		}
		for(i=0;i<size;i++)
			fprintf(file2,"%c",(str[i]-'A'+32)%64+'A');
		if(!feof(file1))
			fputs("\n",file2);
	}
	fclose(file1),fclose(file2);
	return 0;
}
