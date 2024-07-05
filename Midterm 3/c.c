#include <stdio.h>
#include <stdlib.h>

int f(int n, int m)
{
	int temp;
	if (n == 0|| n == m)	{
		return 1;
	}
	else{
		return f(n-1,m-1)+ f(n,m-1);  
	}
	
}

int main()
{
	int input, i, j, f(n);
	char space = ""; 
	printf("Please input a layer number :");
	while(scanf("%d", &input)!=EOF){
		if(input > 15 || input < 1){
			printf("Wrong input, input again!\n\n");
		}
		else{
			for (i = 0; i < input; i++){
				for (j = input-i;j > 0; j--){
					printf("%5c",space);
				}
				for (j = 0; j <= i; j++){
					printf("%5d%5c", f(j,i), space);
				}
				printf("\n");
			}
		}
		printf("Please input a layer number :");
	}
	
	
}
